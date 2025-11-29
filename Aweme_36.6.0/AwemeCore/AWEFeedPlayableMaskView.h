@class UILabel, AWEFeedPlayableMaskGiftView, AWEFeedPlayableMaskModel, AWEFeedPlayableComplianceInfoModel, NSString, UIImageView, CAGradientLayer, AWEFeedPlayableMaskGradientView, AWEFeedPlayableMaskPictureInfoView, AWEFeedPlayableMaskAppInfoView, AWEFeedPlayableMaskBubbleView;

@interface AWEFeedPlayableMaskView : UIView <AWEFeedPlayableMaskView>

@property (retain, nonatomic) AWEFeedPlayableMaskGradientView *gradientColorView;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *tagLabel1;
@property (retain, nonatomic) UILabel *tagLabel2;
@property (retain, nonatomic) AWEFeedPlayableMaskAppInfoView *appInfoView;
@property (retain, nonatomic) AWEFeedPlayableMaskPictureInfoView *pictureInfoView;
@property (retain, nonatomic) UILabel *downloadButton;
@property (retain, nonatomic) UILabel *replayButton;
@property (retain, nonatomic) CAGradientLayer *downloadButtonLayer;
@property (retain, nonatomic) AWEFeedPlayableMaskBubbleView *bubbleView;
@property (retain, nonatomic) AWEFeedPlayableMaskGiftView *giftView;
@property (nonatomic) unsigned long long showType;
@property (retain, nonatomic) AWEFeedPlayableMaskModel *maskModel;
@property (retain, nonatomic) AWEFeedPlayableComplianceInfoModel *complianceInfo;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) id /* block */ downloadBlock;
@property (copy, nonatomic) id /* block */ replayBlock;
@property (copy, nonatomic) id /* block */ otherClickBlock;
@property (copy, nonatomic) id /* block */ longPressBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithMaskModel:(id)a0 complianceInfo:(id)a1 maskShowType:(unsigned long long)a2 section:(id)a3 type:(id)a4;
- (void)showOnView:(id)a0 giftGeted:(BOOL)a1;
- (BOOL)canHandleGestureInCell:(id)a0;
- (void)handleLongGesture:(id)a0;
- (void)p_configDownloadButtonBgColor;
- (void)downloadButtonClicked;
- (void)p_configTagView;
- (void)p_constraintSubviewsForPlayableFinished;
- (void)p_bubbleViewAnimation;
- (void)showGiftViewWithoutAnimation;
- (void)p_bubbleViewFirstPartAnimation;
- (void)p_bubbleViewSecondPartAnimation;
- (void)p_giftViewAnimation;
- (void)topViewTapped:(id)a0;
- (void)repalyButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
