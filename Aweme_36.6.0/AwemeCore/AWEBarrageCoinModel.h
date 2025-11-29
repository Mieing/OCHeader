@class NSString, AWEUserModel;

@interface AWEBarrageCoinModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *coinID;
@property (nonatomic) unsigned long long coinType;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
