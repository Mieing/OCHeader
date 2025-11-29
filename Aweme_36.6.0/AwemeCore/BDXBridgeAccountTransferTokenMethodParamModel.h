@class NSString;

@interface BDXBridgeAccountTransferTokenMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *redirectUri;
@property (copy, nonatomic) NSString *state;
@property (nonatomic) BOOL addIgnoreQueryItem;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
