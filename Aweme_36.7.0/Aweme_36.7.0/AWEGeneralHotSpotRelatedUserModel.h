@class NSArray, NSString;

@interface AWEGeneralHotSpotRelatedUserModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long cardStyle;
@property (retain, nonatomic) NSString *sentenceId;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *title;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
