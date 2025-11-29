@class NSString, WCFinderFeedContentVM, WCFinderFullNewMultiMediaView, UIImageView, WCFinderNormalProgressBar, WCFinderAuthInfoIconView, RichTextView, WCFinderHeadImageView, UILabel, CAGradientLayer;
@protocol WCFinderPickerListTableViewCellDelegate;

@interface WCFinderPickerListTableViewCell : WCFinderTableViewCell <WCFinderProgressBarDelegate, WCFinderFeedContentMediaActionProtocol, ILinkEventExt, WCFinderFocusCellProtocol>

@property (retain, nonatomic) WCFinderFullNewMultiMediaView *mediaView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderHeadImageView *headView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authView;
@property (retain, nonatomic) RichTextView *nameLabel;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *likeNumLabel;
@property (retain, nonatomic) RichTextView *contentLabel;
@property (retain, nonatomic) WCFinderNormalProgressBar *progressBar;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *curProgressTimeLabel;
@property (retain, nonatomic) UILabel *totalProgressTimeLabel;
@property (retain, nonatomic) UIImageView *pauseView;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) double duration;
@property (nonatomic) double headViewBottomOffset;
@property (weak, nonatomic) id<WCFinderPickerListTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellId;
+ (double)cellH;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)updateMediaWith:(id)a0 isSubScene:(BOOL)a1;
- (id)createGradientLayer;
- (void)layoutSubviews;
- (BOOL)isSupportVideoProcess;
- (void)setTargetViewHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onTap:(id)a0;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)onPlayerProgressBarCurPlayPrecent:(double)a0 dragState:(unsigned long long)a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldCaluculateAsFocusCell;
- (void)playVideoIfSupport:(double)a0 silencePlay:(BOOL)a1;
- (void)stopVideoIfSupport;
- (void)_triggerAntiAddictCheckLogic;
- (void).cxx_destruct;

@end
