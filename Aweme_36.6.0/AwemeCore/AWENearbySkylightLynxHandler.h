@class NSMutableArray;
@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkylightLynxHandler : NSObject

@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (nonatomic) long long pageType;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;

+ (void)publishEventResetSelectedTags;

- (void)unregisterSubscriber;
- (id)initWithPageType:(long long)a0;
- (void)registerSubscribes;
- (void)__registerOnNearbyFeedParamsUpdate;
- (void)__registerOnCapsuleTextUpdate;
- (void)__registerOnTagPanelOpenOrClose;
- (void)__registerShowOrderBubble;
- (void)__registerLifeServiceIconLayoutInfo;
- (void)__registerDidTransformerCardShow;
- (void)__registerOpenHalfScreenDialog;
- (void)__registerLynxTransformerEvent;
- (void)__registerLynxOrderP1ayEvent;
- (void)__registerTransformerSwitchBtn;
- (void)__registerNearbyClickSwitchBtn;
- (void)__registerNearbySwitchBtnDidAppear;
- (void)__registerNearbyMoveChannelGuideBannerShow;
- (void).cxx_destruct;

@end
