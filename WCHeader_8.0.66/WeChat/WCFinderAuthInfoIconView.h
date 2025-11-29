@class WCFinderAuthInfo;

@interface WCFinderAuthInfoIconView : MMWebImageView

@property (retain, nonatomic) WCFinderAuthInfo *authInfo;

- (void)updateIconWithAuthInfo:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateIconWithAuthIconUrl:(id)a0 authIconType:(unsigned long long)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
