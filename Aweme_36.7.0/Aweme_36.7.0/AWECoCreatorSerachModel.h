@class NSArray, AWECoCreatorSerachExtraModel;

@interface AWECoCreatorSerachModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *userList;
@property (retain, nonatomic) AWECoCreatorSerachExtraModel *extra;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
