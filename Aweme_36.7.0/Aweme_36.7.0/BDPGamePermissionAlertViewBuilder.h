@class NSString, UIView;

@interface BDPGamePermissionAlertViewBuilder : NSObject

@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSString *iconURL;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *privacyView;
@property (nonatomic) long long alertStyle;

- (void).cxx_destruct;

@end
