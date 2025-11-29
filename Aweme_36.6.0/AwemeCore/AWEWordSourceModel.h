@class NSArray, NSString;

@interface AWEWordSourceModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *wordsArray;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *previousPageName;
@property (copy, nonatomic) NSString *hideWords;
@property (copy, nonatomic) NSString *ecomTitle;
@property (copy, nonatomic) NSString *maskType;
@property (copy, nonatomic) NSString *imprExtra;
@property (copy, nonatomic) NSString *feedbackUrl;
@property (nonatomic) long long cardHeightState;

+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
