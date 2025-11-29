@class NSArray, DVEBrushBGImageControlView, NSString, UIButton;
@protocol DVEBrushTopBarDelegate;

@interface DVEBrushTopBar : DVEBaseBrushTopBar <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) DVEBrushBGImageControlView *bgImageControlView;
@property (retain, nonatomic) NSArray *backgroundImageValues;
@property (nonatomic) unsigned long long currentBackgroundImageIndex;
@property (weak, nonatomic) id<DVEBrushTopBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickBack;
- (void)didClickedDone;
- (void)updateBackgroundImageValues:(id)a0;
- (void)selectWithBackgroundImageValues:(id)a0;
- (void)selectBackgroundImageWithColor:(id)a0;
- (void)adjustLayoutIfNeed;
- (void)didSwitchBackgroundImage;
- (void).cxx_destruct;
- (id)init;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;

@end
