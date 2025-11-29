@interface AWEMessageReachLocsVerifyService : NSObject

+ (BOOL)isCurrentTopScene;
+ (BOOL)homepageLocsVerify:(id)a0;
+ (BOOL)handleLocVerify:(id)a0 extraInfo:(id)a1;
+ (id)locVerifyHandlerRegistry;
+ (id)getHomepageTabID;
+ (id)getMatchLocsIdentifierWithLocsArray:(id)a0;
+ (id)locsVerifyFailMsg;

@end
