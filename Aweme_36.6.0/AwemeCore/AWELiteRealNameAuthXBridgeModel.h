@class NSString;

@interface AWELiteRealNameAuthXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *buttonText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
