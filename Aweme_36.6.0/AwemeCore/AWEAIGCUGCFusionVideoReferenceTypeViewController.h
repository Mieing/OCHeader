@class NSArray, UICollectionView, DUXButton, UILabel, AWEVideoPublishViewModel, NSString;
@protocol AWEAIGCUGCFusionVideoReferenceTypePanelDelegate;

@interface AWEAIGCUGCFusionVideoReferenceTypeViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *driveModeCollectionView;
@property (retain, nonatomic) DUXButton *completeButton;
@property (copy, nonatomic) NSArray *dataSource;
@property (nonatomic) long long trackSelectedIndex;
@property (weak, nonatomic) id<AWEAIGCUGCFusionVideoReferenceTypePanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishViewModel:(id)a0;
- (void)reloadWithVideoClipExportResult:(id)a0;
- (BOOL)hasSelectedReferenceType;
- (void)completeButtonClicked;
- (BOOL)referenceTypeShouldDisableWithReferenceTypeModel:(id)a0 exportResult:(id)a1;
- (BOOL)referenceTypeShouldDisableWithReferenceTypeModel:(id)a0 publishViewModel:(id)a1;
- (void)updateCompleteBtnStatus;
- (struct CGSize { double x0; double x1; })calculateReferenceTypeCardSize;
- (BOOL)p_createBodyIsMultiPersonCheck:(id)a0;
- (BOOL)p_createBodyIsMultiPetCheck:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)updateUI;

@end
