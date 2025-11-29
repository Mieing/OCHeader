@class NSString;

@interface BDXBridgeImNotifyFlameLynxLoadOverMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *stage;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (nonatomic) long long success;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
