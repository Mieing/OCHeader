@class NSString, UIImageView, UILabel, UIView;

@interface AWEFeedConcernPOIGoodsInfoHeaderView : UIView <AWEFeedConcernPOIGoodsInfoHeaderProtocol>

@property (retain, nonatomic) UIImageView *locationImageView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (copy, nonatomic) id /* block */ tapMerchantHandle;
@property (retain, nonatomic) UIImageView *poiAvatarImageView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UIView *poiAvatarNameView;
@property (retain, nonatomic) UILabel *themeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInfoHeaderViewWithModel:(id)a0;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)__buildUI;
- (void)__addAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
