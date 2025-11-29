@interface AWEGeneralAnchorManager : NSObject

+ (Class)aAWEPadModuleAdapterClass;
+ (id)generalCodeInsertWithObject:(id)a0;
+ (id)insertCodeInAWEStudioUIWithObject:(id)a0;
+ (id)insertCodeInAWEStudioJumpWithObject:(id)a0;
+ (id)insertCodeInAWEFeedBulletWithObject:(id)a0;
+ (id)insertCodeInAWEFeedMonitorWithObject:(id)a0;
+ (id)insertCodeInAWEFeedAnchorShowTrackWithObject:(id)a0;
+ (id)insertCodeInAWEFeedAnchorClickBTMTrackWithObject:(id)a0;
+ (id)insertCodeInAWEFeedJumpActionWithObject:(id)a0;
+ (id)insertCodeInAWECommentJumpActionWithObject:(id)a0;
+ (id)insertCodeInAWECommentAnchorShowTrackWithObject:(id)a0;
+ (id)insertCodeInAWECommentAnchorClickTrackWithObject:(id)a0;
+ (void)trackAnchorShowWithObject:(id)a0 withCarrierType:(id)a1;
+ (void)trackAnchorClickWithObject:(id)a0 withCarrierType:(id)a1;
+ (id)sourceBtmTokenWithObject:(id)a0 BtmInfo:(id)a1;

- (id)aAWEPadModuleAdapter;

@end
