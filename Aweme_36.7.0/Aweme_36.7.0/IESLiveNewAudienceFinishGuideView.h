@class IESLiveNewAudienceFinishGuidePlayerView, IESLiveNewAudienceFinishSeparatorTitleView, IESLiveGuidePlayerMessageManager;

@interface IESLiveNewAudienceFinishGuideView : UIView

@property (retain, nonatomic) IESLiveNewAudienceFinishSeparatorTitleView *titleView;
@property (retain, nonatomic) IESLiveNewAudienceFinishGuidePlayerView *playerView;
@property (retain, nonatomic) IESLiveGuidePlayerMessageManager *messageManager;
@property (copy, nonatomic) id /* block */ onError;

- (void)configModel:(id)a0 onClick:(id /* block */)a1 onError:(id /* block */)a2;
- (void)stopPlayPreview;
- (void).cxx_destruct;
- (void)pause;
- (void)handleError:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resume;
- (void)setupViews;

@end
