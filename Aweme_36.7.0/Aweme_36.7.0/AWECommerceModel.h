@class NSArray, NSString, AWEURLModel;

@interface AWECommerceModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *headerImageURL;
@property (copy, nonatomic) NSArray *commerceLinkList;
@property (copy, nonatomic) NSArray *challengeList;
@property (copy, nonatomic) NSString *showcaseURL;
@property (copy, nonatomic) NSString *showcaseName;
@property (copy, nonatomic) NSString *showcaseSiteId;
@property (retain, nonatomic) NSArray *taskList;

+ (id)challengeListJSONTransformer;
+ (id)headerImageURLJSONTransformer;
+ (id)commerceLinkListJSONTransformer;
+ (id)taskListJSONTransformer;
+ (id)smartPhoneModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
