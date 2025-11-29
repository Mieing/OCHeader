@class NSString, UIView;

@interface AWEProfileHeaderRecommendListCell : UICollectionViewCell <AWEProfileHeaderCellProtocol>

@property (weak, nonatomic) UIView *recommendListView;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithHeaderContext:(id)a0 recommendListView:(id)a1;
- (void).cxx_destruct;

@end
