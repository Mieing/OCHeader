@class NSString, NSArray;

@interface AWESearchHotSpotRelatedInfoModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSArray *backgroundList;

+ (id)userListJSONTransformer;
+ (id)backgroundListJSONTransformer;
+ (id)vsVideoModelJSONTransformer;
+ (id)vsLiveModelJSONTransformer;
+ (id)vsUserModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
