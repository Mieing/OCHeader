@class NSArray;

@interface AWEIMPrivateChatManagementConfigModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *functionList;

+ (id)functionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
