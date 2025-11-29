@class UILabel, NSString, AWESettingItemModel;

@interface AWEUserCenterWhoCanMessageMeLeftTextSectionHeaderView : UICollectionReusableView <AWEUserCenterWhoCanMessageMeCollectionReusableViewProtocol>

@property (retain, nonatomic) AWESettingItemModel *model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
