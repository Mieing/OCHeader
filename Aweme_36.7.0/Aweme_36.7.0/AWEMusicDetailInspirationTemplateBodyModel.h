@class NSArray, NSString;

@interface AWEMusicDetailInspirationTemplateBodyModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *templateList;
@property (retain, nonatomic) NSArray *lvTemplateList;
@property (retain, nonatomic) NSArray *awemeTemplateList;
@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) BOOL collectionTab;
@property (nonatomic) BOOL coverType;
@property (nonatomic) long long videoMinLimit;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)templateListJSONTransformer;
+ (id)lvTemplateListJSONTransformer;
+ (id)awemeTemplateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
