@class NSDictionary, UIViewController, APBToygerBioBisConfigManager;

@interface APBRequest : NSObject

@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) APBToygerBioBisConfigManager *protocolModel;
@property (retain, nonatomic) NSDictionary *extInfo;

- (id)initWithViewController:(id)a0 protocolModel:(id)a1 extInfo:(id)a2;
- (void).cxx_destruct;

@end
