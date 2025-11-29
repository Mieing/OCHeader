@interface AWEPluginVideoPublishUtils : NSObject

+ (id)generateVideoPublishParams:(id)a0;
+ (unsigned long long)getVideoPermissionAB:(id)a0;
+ (BOOL)shouldReplaceAnchorMessage:(id)a0;
+ (double)validScale:(double)a0;
+ (double)validScaleWeb:(double)a0;
+ (id)anchorInfoWithModel:(id)a0 uniqueID:(id)a1;
+ (id)generateAWEStudioTaskInfo:(id)a0 uniqueID:(id)a1;
+ (void)addStickersTo:(id)a0 model:(id)a1 stickerSettings:(id)a2;
+ (void)handleUserInfoAndTitleWithModel:(id)a0 editComposer:(id)a1 titleSettings:(id)a2 AWEStudioTaskInfo:(id)a3;
+ (double)validTime:(double)a0 start:(BOOL)a1 duration:(double)a2;
+ (BOOL)isValidLocationX:(double)a0 Y:(double)a1;
+ (double)validImageScale:(double)a0;
+ (void)addAtUsersToAWEStudioTaskInfo:(id)a0 model:(id)a1;
+ (void)addTitleTo:(id)a0 model:(id)a1 titleSettings:(id)a2;
+ (BOOL)isValidLocation:(double)a0;

@end
