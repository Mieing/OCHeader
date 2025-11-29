@class NSArray, NSString;

@interface AWERelationLabel : AWEBaseApiModel

@property (nonatomic) long long labelType;
@property (retain, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSString *extra;

+ (id)userListJSONTransformer;
+ (id)labelTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
