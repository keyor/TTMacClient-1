/************************************************************
 * @file         NSDictionary+MGJ.h
 * @author       快刀<kuaidao@mogujie.com>
 * summery       NSDictionary的扩展
 ************************************************************/

#import <Foundation/Foundation.h>

@interface NSDictionary (MGJ)

-(BOOL)containKey:(NSString*)key;

-(id)safeDataForKey:(NSString*)key;

@end
