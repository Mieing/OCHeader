@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkylightTempoHandler : NSObject

@property (nonatomic) long long pageType;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;

- (void)unregisterSubscriber;
- (id)initWithPageType:(long long)a0;
- (void)registerSubscribes;
- (void)handleLifeServiceIconLayoutInfo:(id)a0;
- (void)handleOpenNearbyDialog:(id)a0;
- (void)handleRenderCompleted:(id)a0;
- (void)handleOnLynxActionDone:(id)a0;
- (void)handleNearbySwitchFeedStyle:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
