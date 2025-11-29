@class NSString;

@interface BDPBindingUIWidgetModal : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *cancelColor;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSString *confirmColor;
@property (nonatomic) BOOL showCancel;

- (void).cxx_destruct;

@end
