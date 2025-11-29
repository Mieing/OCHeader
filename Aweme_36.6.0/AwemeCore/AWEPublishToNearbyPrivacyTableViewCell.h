@class NSString, UIImageView, UILabel, UIView;
@protocol AWEPublishToNearbyPrivacySelectionViewProtocol;

@interface AWEPublishToNearbyPrivacyTableViewCell : UITableViewCell <AWEPublishToNearbyPrivacyTableViewCellProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<AWEPublishToNearbyPrivacySelectionViewProtocol> *selectNearbyPrivacyView;
@property (retain, nonatomic) UIView *yellowPointView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__buildUI;
- (void)__layoutUI;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 selectNearbyPrivacyView:(id)a2;
- (void)showYellowPointViewIfNeeds;
- (void)hiddenYellowPointView;
- (void).cxx_destruct;

@end
