@class UIImageView, UILabel, DUXBadge, AWEMVSelectedBillboardEntranceModel;

@interface AWEMVSelectedBillboardEntranceView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXBadge *redPointBadge;
@property (retain, nonatomic) AWEMVSelectedBillboardEntranceModel *entranceModel;

+ (double)viewHeight;

- (void)updateWithTheme:(long long)a0;
- (void)showRedPointIfNeeded;
- (void)didClickEntranceView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)themeDidChange;
- (void)updateWithModel:(id)a0;

@end
