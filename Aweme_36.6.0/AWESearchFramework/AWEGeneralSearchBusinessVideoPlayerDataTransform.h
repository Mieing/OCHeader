@interface AWEGeneralSearchBusinessVideoPlayerDataTransform : NSObject

+ (BOOL)enableMixVideo:(id)a0;
+ (long long)searchAIAbstract;
+ (id)tokenTypeForModel:(id)a0;
+ (BOOL)enableMixTypeRelatedVideo:(id)a0;
+ (BOOL)enablePlayletBottomView:(id)a0;
+ (BOOL)enableHotSearchTipView:(id)a0 referString:(id)a1;
+ (id)btmIdWithModel:(id)a0;
+ (id)dcmIdWithModel:(id)a0;
+ (void)updateStandardVideoPlayerModelWithSearchVideoCardModel:(id)a0 playerModel:(id)a1;
+ (id)getStandardVideoPlayerModelWithSearchVideoCardModel:(id)a0;
+ (id)getLeftTopContainerModelWithModel:(id)a0 cardModel:(id)a1 referString:(id)a2;
+ (id)getRightBottomContainerModelWithModel:(id)a0;
+ (id)getBottomContainerModelWithModel:(id)a0 referString:(id)a1;
+ (id)getLeftBottomContainerModelWithModel:(id)a0;
+ (id)getPlayerInteractorConfigModelWithModel:(id)a0;
+ (id)componentCommonTrackDataWithModel:(id)a0 referString:(id)a1 rank:(long long)a2 bindedData:(id)a3;
+ (BOOL)showAuthorInfoWithModel:(id)a0;
+ (id)publishTimeWithModel:(id)a0;
+ (BOOL)enablePlayletBottomView:(id)a0 referString:(id)a1;
+ (void)updateInteractModel:(id)a0 withSearchVideoModel:(id)a1 referString:(id)a2 rank:(long long)a3 bindedData:(id)a4;

@end
