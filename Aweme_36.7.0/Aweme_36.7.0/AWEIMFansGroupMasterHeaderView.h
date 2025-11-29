@class NSString, AWEIMPublicGroupManagerSectionHeaderViewModel, UILabel, UIButton;

@interface AWEIMFansGroupMasterHeaderView : UICollectionReusableView <AWEIMPublicGroupReusableViewLifeCycle>

@property (retain, nonatomic) UILabel *lable;
@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIButton *editCompleteButton;
@property (retain, nonatomic) AWEIMPublicGroupManagerSectionHeaderViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)__addKVO;
- (void)reusableViewWillDisplayAtIndexPath:(id)a0;
- (void)reusableViewDidEndDisplayWithIndexPath:(id)a0;
- (void)__removeKVO;
- (void)__handleEditButtonClicked:(id)a0;
- (void)__refreshEditButtonUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
