@class WCMediaEcsInfoButton, WCMomentsBizOriginalArticleButton;

@interface WCImageFullScreenButtonsContainerView : MMUIView

@property (retain, nonatomic) WCMomentsBizOriginalArticleButton *bizOriginalArticleButton;
@property (retain, nonatomic) WCMediaEcsInfoButton *ecsInfoButton;
@property (nonatomic) unsigned long long contentItemScene;
@property (copy, nonatomic) id /* block */ originalArticleBlock;
@property (copy, nonatomic) id /* block */ ecsInfoButtonBlock;
@property (copy, nonatomic) id /* block */ finderPreviewBlock;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showMediaItem:(id)a0 mediaItemWrap:(id)a1;
- (BOOL)canShowFinderPreviewButton:(id)a0;
- (BOOL)canShowBizOriginalArticleButtonWithMediaItem:(id)a0;
- (BOOL)canShowEcsInfoButtonWithMediaItem:(id)a0;
- (void)initBizOriginalArticleButton;
- (void)iniEcsInfoButton;
- (void)layoutSubviews;
- (void)onClickOriginalArticleButton;
- (void)onClickEcsInfoButton;
- (void)onClickFinderInfoButton;
- (void).cxx_destruct;

@end
