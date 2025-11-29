@class UILabel, UIImageView, NSString;

@interface BDPPrivacyPolicyFooterView : UIView {
    NSString *_appName;
    NSString *_privacyPolicyURL;
}

@property (retain, nonatomic) UILabel *privacyPolicyLabel;
@property (retain, nonatomic) UIImageView *privaPolicyImageView;

- (id)initWithAppName:(id)a0 privacyPolicyURL:(id)a1;
- (void)onPrivacyPolicyViewTaped;
- (void).cxx_destruct;
- (void)setupUI;

@end
