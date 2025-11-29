@class AWELocalDBUserModel;

@interface AWELocalUserOperationModel : AWEBaseApiModel

@property (nonatomic) long long opType;
@property (retain, nonatomic) AWELocalDBUserModel *user;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
