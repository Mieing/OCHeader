@class NSString, NSArray, UICollectionView, HTSEventContext, UILabel, UIView, UIButton;

@interface IESLiveAudienceInteractEntrancePanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSArray *configurations;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIView *preApplyListView;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didClickSwitchButton;
- (BOOL)p_needToShowPreApplyList;
- (void)p_trackSwitchButton;
- (id)initWithConfigurations:(id)a0 trackContext:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
