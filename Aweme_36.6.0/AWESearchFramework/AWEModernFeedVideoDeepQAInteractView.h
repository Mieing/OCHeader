@class AWEAwemeModel, NSString, UIView, NSArray, UIImageView, UIButton, AWEModernFeedVideoDeepQAPanelView, NSMutableArray, AWEModernFeedVideoDeepQABottomTipView;

@interface AWEModernFeedVideoDeepQAInteractView : UIView

@property (retain, nonatomic) UIView *progressBottomView;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) AWEModernFeedVideoDeepQAPanelView *videoAbstractPanel;
@property (retain, nonatomic) AWEModernFeedVideoDeepQABottomTipView *videoBottomView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long videoSizeType;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL hasAddPointViews;
@property (retain, nonatomic) NSMutableArray *pointViews;
@property (nonatomic) double startExpandTime;
@property (nonatomic) double endExpandTime;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIView *progressView;
@property (copy, nonatomic) id /* block */ clickVideoTipView;
@property (copy, nonatomic) id /* block */ clickVideoAbstractSectionBlock;
@property (copy, nonatomic) id /* block */ videoActionBtnClicked;

- (void)showPlayingUI;
- (void)showPauseUI;
- (void)switchVideoStatusByClick;
- (void)videoTipViewTapped;
- (void)setInteractViewWhenVCAppear;
- (void)setInteractViewWhenVCDisappear;
- (void)configWithAwemeModel:(id)a0 videoSizeType:(unsigned long long)a1;
- (void)showLoadingImageUI;
- (void)updateVideoInteractViewWithPlayTime:(double)a0;
- (void)addProgressPointsView;
- (void)trackLayerDuration;
- (void)expandPanleWithAction:(id)a0;
- (id)videoTitleTrackParams;
- (void)packAnimation;
- (void)expandAnimation;
- (void)closePanelWithAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
