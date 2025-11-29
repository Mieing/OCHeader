@class UIView, NSString, UIImage, UISwipeGestureRecognizer, UILongPressGestureRecognizer, UIImageView, UIButton, AWEAwemeModel, LOTAnimationView, UILabel, UIColor;

@interface AWEListenFeedPlayListCell : UICollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIImageView *mixImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImage *mixImage;
@property (retain, nonatomic) UIImage *separatorImage;
@property (retain, nonatomic) UIImage *circleseparatorImage;
@property (copy, nonatomic) NSString *mixPreString;
@property (copy, nonatomic) NSString *episodeString;
@property (copy, nonatomic) NSString *titleString;
@property (nonatomic) BOOL isMixStyle;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *dragButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIView *tagLabelContainer;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) LOTAnimationView *waveView;
@property (retain, nonatomic) UIView *waveContainerMaskView;
@property (nonatomic) BOOL enableEnhanceCollect;
@property (retain, nonatomic) NSString *descriptionAccessibilityString;
@property (retain, nonatomic) UISwipeGestureRecognizer *leftSwipeGestureRecognizer;
@property (retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isSupportedExtendStyleEnterFrom;
@property (nonatomic) BOOL enableDragMove;
@property (nonatomic) BOOL enableDelete;
@property (nonatomic) BOOL isShowingDelete;
@property (retain, nonatomic) UIColor *bgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGesture;
- (BOOL)isSupportMix;
- (void)updateDescriptionLabelIfNeeded;
- (id)fontForButton;
- (struct CGSize { double x0; double x1; })sizeForButton;
- (void)configWithCellViewModel:(id)a0 playModel:(id)a1;
- (void)swipeLeft:(id)a0;
- (void)swipeRight:(id)a0;
- (void)configWithModel:(id)a0 playModel:(id)a1;
- (void)hideLeftSwipeButtonAndReturnToNormal;
- (BOOL)dragHandlerShouldRespondToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)deleteButtonClicked:(id)a0;
- (void)showMovementShadow:(BOOL)a0;
- (void)updateUIToPauseStateIfNeeded;
- (void)updateButton:(id)a0 withTitleAndImageSpacing:(double)a1;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
