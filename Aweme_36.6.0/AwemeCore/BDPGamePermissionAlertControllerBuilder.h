@class NSString, BDPUniqueID, UIView;

@interface BDPGamePermissionAlertControllerBuilder : NSObject

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *privacyView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long style;

- (void).cxx_destruct;

@end
