@class NSString, UILabel, MMUIButton, MMWebImageView;

@interface WCFinderSubtitleBubble : WCFinderJumpInfoView <WCActionSheetDelegate>

@property (nonatomic) double maxTextAreaWidth;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel_1;
@property (retain, nonatomic) UILabel *subtitleLabel_2;
@property (retain, nonatomic) MMUIButton *episodeBtn;
@property (nonatomic) BOOL isClickEpisodeBtn;
@property (nonatomic) unsigned long long operatingType;
@property (nonatomic) unsigned long long bubbleStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)dealloc;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (void)updateStyleAnimated:(BOOL)a0;
- (void)updateEpisodeBtnAlpha;
- (void)updateLayoutView;
- (void)onClickAction;
- (void)collectionEpisodeBtnClicked;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (unsigned long long)getCurPhase;
- (id)getClickedControlStr;
- (void).cxx_destruct;

@end
