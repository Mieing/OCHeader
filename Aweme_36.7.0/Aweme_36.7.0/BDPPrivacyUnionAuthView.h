@class NSDictionary, UIImageView, UIView, BDPUniqueID, UILabel;

@interface BDPPrivacyUnionAuthView : UIScrollView

@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *unionAuthTips;
@property (retain, nonatomic) UILabel *clientNameLeft;
@property (retain, nonatomic) UIImageView *clientIcon;
@property (retain, nonatomic) UILabel *clientName;
@property (retain, nonatomic) UILabel *scopeDescLeft;
@property (retain, nonatomic) UILabel *scopeDesc;
@property (retain, nonatomic) UILabel *clientMainBodyLeft;
@property (retain, nonatomic) UILabel *clientMainBody;
@property (retain, nonatomic) UILabel *clientMainBodyTypeLeft;
@property (retain, nonatomic) UILabel *clientMainBodyType;
@property (retain, nonatomic) UILabel *creditCodeLeft;
@property (retain, nonatomic) UILabel *creditCode;
@property (retain, nonatomic) UILabel *clientTypeLeft;
@property (retain, nonatomic) UILabel *clientType;
@property (retain, nonatomic) UILabel *businessLicenseLeft;
@property (retain, nonatomic) UILabel *businessLicense;

- (id)initWithUniqueID:(id)a0 params:(id)a1;
- (void)tapBusinessLicense;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
