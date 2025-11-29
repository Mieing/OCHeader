@class NSString;

@interface TTAXBridgeAccountLoginMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *status;
@property (nonatomic) BOOL alreadyLoggedIn;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
