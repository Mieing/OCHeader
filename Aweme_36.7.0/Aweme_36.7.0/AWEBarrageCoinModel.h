@class NSString, AWEUserModel;

@interface AWEBarrageCoinModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *coinID;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
