@class IESLiveScreencastResultStore, IESLiveScreencastResultView;

@interface IESLiveScreencastResultFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveScreencastResultView *resultView;
@property (retain, nonatomic) IESLiveScreencastResultStore *store;

- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)bindXLiveObserveActions;
- (void)bringToFrontIfNeeded;
- (void).cxx_destruct;

@end
