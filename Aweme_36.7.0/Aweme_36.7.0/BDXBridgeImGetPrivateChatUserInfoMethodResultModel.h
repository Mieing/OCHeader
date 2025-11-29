@class NSArray;

@interface BDXBridgeImGetPrivateChatUserInfoMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *userInfos;

+ (id)userInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
