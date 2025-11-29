@class UIView, NSString, NSArray, UIImageView, UIButton, UICollectionView, UILabel, ACCButton;

@interface AWESelectTemplateChoseSegmentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *sectionSeparator;
@property (nonatomic) double lastCollectionViewInteractiveTime;
@property (nonatomic) BOOL textEditEnable;
@property (copy, nonatomic) NSArray *thumbnailImages;
@property (copy, nonatomic) NSArray *thumbnailTimes;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bottomTitleLabel;
@property (retain, nonatomic) ACCButton *editTextButton;
@property (nonatomic) BOOL isVideoAndPicMixed;
@property (retain, nonatomic) UIImageView *cursorView;
@property (retain, nonatomic) UICollectionView *videosCollectionView;
@property (nonatomic) long long currentVideoIndex;
@property (nonatomic) double panelAnimationDuration;
@property (copy, nonatomic) id /* block */ selectCallback;
@property (copy, nonatomic) id /* block */ saveButtonClick;
@property (copy, nonatomic) id /* block */ cancelButtonClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })thumbnailPixelSize;
+ (double)defaultHeight;

- (void)buildViews;
- (double)currentViewHeight;
- (void)saveButtonAction;
- (void)updateCursorWithIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)checkLastCollectionViewInteractiveTimeDiff;
- (void)updateLastCollectionViewInteractiveTime;
- (void)snapshotForPanelTransitionAnimation:(id)a0 heightDiff:(double)a1;
- (void)hidePanelWithAnimationWithCoverFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showPanelWithAnimationWithCompletion:(id /* block */)a0;
- (void)animateForShowCropViewWithSelectedIndex:(unsigned long long)a0 isImage:(BOOL)a1;
- (void)animateForHideCropView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textEditEnable:(BOOL)a1 isVideoAndPicMixed:(BOOL)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)hideCursor;
- (void)cancelButtonAction;

@end
