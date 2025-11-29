@class UIImageView, UILabel, BDPUniqueID, UIView;

@interface BDPAboutTrustLevelView : UIView

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) UIImageView *trustLevelIcon;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *detailArrow;

- (void)onDetailTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;
- (void)createUI;

@end
