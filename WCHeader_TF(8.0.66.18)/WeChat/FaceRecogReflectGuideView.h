@class UIButton, MMUILabel, MVideoPlayerView;
@protocol FaceRecogGuideViewDelegate;

@interface FaceRecogReflectGuideView : MMUIView <MVideoPlayerViewDelegate> {
    MVideoPlayerView *m_view;
    MMUILabel *m_bigTitle;
    MMUILabel *m_detail;
    UIButton *m_btn;
}

@property (weak, nonatomic) id<FaceRecogGuideViewDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)initView;
- (void)onFaceRecogGuideFinished;
- (void)playGuide;
- (void)onPlayEnd;
- (void).cxx_destruct;

@end
