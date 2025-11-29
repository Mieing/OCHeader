@class ACCModernAutoCaptionInputConfig, UICollectionView, NSDictionary, UIView, ACCModernAutoCaptionStyleDataHelper, NSString;
@protocol ACCModernAutoCaptionStyleViewDelegate;

@interface ACCModernAutoCaptionStyleViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL edited;
@property (retain, nonatomic) NSDictionary *originalConfig;
@property (weak, nonatomic) id<ACCModernAutoCaptionStyleViewDelegate> delegate;
@property (weak, nonatomic) ACCModernAutoCaptionStyleDataHelper *dataHelper;
@property (nonatomic) BOOL disableTemplate;
@property (weak, nonatomic) ACCModernAutoCaptionInputConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)basicTrackParams;
- (void)didClickCancelBtn;
- (void)didClickSaveBtn;
- (void)dataDidReady:(id)a0;
- (void)trackSelectSubtitleTemplateWithTemplate:(id)a0 isDefault:(BOOL)a1;
- (void)trackUseSubtitleTemplateWithTemplate:(id)a0 duration:(double)a1 isDefault:(BOOL)a2;
- (void)trackSelectTextColorWithColor:(id)a0;
- (void)trackSelectTextStyleWithStyle:(unsigned long long)a0;
- (void)trackSelectTextFontWithFont:(id)a0 isUseCache:(BOOL)a1;
- (void)trackSubtitleTemplateShowWithTemplate:(id)a0 isDefault:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
