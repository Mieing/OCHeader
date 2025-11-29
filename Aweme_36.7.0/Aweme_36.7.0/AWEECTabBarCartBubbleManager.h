@class NSDictionary, AWEECCTabBarCartBubbleTriggerDataModel;
@protocol AWEECTabBarBubbleNReddotProtocol;

@interface AWEECTabBarCartBubbleManager : NSObject

@property (retain, nonatomic) AWEECCTabBarCartBubbleTriggerDataModel *dataModel;
@property (nonatomic) BOOL bubbleShowed;
@property (weak, nonatomic) id<AWEECTabBarBubbleNReddotProtocol> bubbleHandler;
@property (readonly, copy, nonatomic) NSDictionary *extraBizParams;

+ (id)sharedManager;

- (void)registerBubbleHandler:(id)a0;
- (id)getHPChannelBubble;
- (void)recordBubbleShow;
- (void)recordBubbleClick;
- (id)getTabBarBadgeModel;
- (void)showOldBadgeIfNeeded;
- (void)recordBubbleResp:(id)a0;
- (id)getRecordedBubbleResp;
- (id)prepareBaseTrackParams;
- (void)clearRecordedBubbleResp;
- (void).cxx_destruct;
- (void)initManager;

@end
