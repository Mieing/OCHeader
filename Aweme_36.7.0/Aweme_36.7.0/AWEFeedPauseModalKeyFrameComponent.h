@class AWEFeedPauseModalKeyFrameView, AWEAwemeModel;

@interface AWEFeedPauseModalKeyFrameComponent : AWEFeedPauseModalBaseComponent

@property (retain, nonatomic) AWEFeedPauseModalKeyFrameView *keyFrameView;
@property (retain, nonatomic) AWEAwemeModel *model;

- (unsigned long long)pauseModalBizType;
- (void)deallocComponentWithModel:(id)a0;
- (void)hideComponentWithModel:(id)a0 clickMethod:(id)a1;
- (id)trackerParamsForFeedPauseButtonShow:(id)a0;
- (id)trackerParamsForFeedPauseButtonClose:(id)a0;
- (void)restoreProgressControllerToNormal;
- (void)resetKeyFrameView;
- (id)pauseContentWithModel:(id)a0;
- (id)updateViewWithModel:(id)a0;
- (void).cxx_destruct;

@end
