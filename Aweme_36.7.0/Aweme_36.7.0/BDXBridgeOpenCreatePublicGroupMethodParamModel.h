@class NSNumber, NSString;

@interface BDXBridgeOpenCreatePublicGroupMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *bizLine;
@property (copy, nonatomic) NSString *bizScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSNumber *enterChatOnCreate;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
