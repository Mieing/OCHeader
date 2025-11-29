@class UIView, NSString, WCFinderFeedContentVM, WCFinderFeedImageCDNView, UIImageView, RichTextView, UIPageControl, UILabel;

@interface WCFinderStreamCollectionViewCell : UICollectionViewCell <WCFinderFeedContentVMExt>

@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) WCFinderFeedImageCDNView *imageView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) UIView *statusBar;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UILabel *likeNumLabel;
@property (nonatomic) BOOL isShowStatus;
@property (retain, nonatomic) UIView *blurBGView;
@property (retain, nonatomic) UIImageView *privateTipsView;
@property (retain, nonatomic) UIView *privateSperatorLine;
@property (retain, nonatomic) UIImageView *stickyTopIconView;
@property (retain, nonatomic) UIPageControl *pageCtrl;
@property (retain, nonatomic) UIView *oMaskView;
@property (retain, nonatomic) UILabel *maskTipsLabel;
@property (nonatomic) unsigned long long showInfoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)streamCellHeightWith:(id)a0 width:(double)a1 isShowStatus:(BOOL)a2;
+ (id)descLabelFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initSubview;
- (void)updateContentWith:(id)a0 showInfoType:(unsigned long long)a1 hasMask:(BOOL)a2;
- (void)updateInfoBubbleContentWith:(id)a0 showInfoType:(unsigned long long)a1;
- (void)updateImage:(id)a0;
- (void)adjustLikeBlurMargin;
- (BOOL)displayStickTopIcon;
- (BOOL)displayPrivateIcon;
- (void)setStickTopIconDisplay:(BOOL)a0;
- (BOOL)stickyTopIconViewIsHidden;
- (void)onFeedContent:(id)a0 commentDataChanged:(id)a1;
- (void)onFeedContent:(id)a0 privateStateChange:(BOOL)a1;
- (void)onFeedContentPrivateStateChange:(BOOL)a0;
- (void)onFeedContentStickyTopStatueChanged:(id)a0;
- (void)updateBlurView;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)onFeedLiveOnlineCountChange:(long long)a0 participantWording:(id)a1;
- (void).cxx_destruct;

@end
