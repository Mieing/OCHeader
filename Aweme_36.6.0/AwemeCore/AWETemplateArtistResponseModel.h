@class NSArray, NSString;

@interface AWETemplateArtistResponseModel : AWEBaseApiModel <AWETemplateArtistResponseModelProtocol>

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *templateList;
@property (retain, nonatomic) NSArray *lvTemplateList;
@property (retain, nonatomic) NSArray *awemeTemplateList;
@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) BOOL collectionTab;
@property (nonatomic) BOOL coverType;
@property (nonatomic) long long videoMinLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hasMoreJSONTransformer;
+ (id)templateListJSONTransformer;
+ (id)lvTemplateListJSONTransformer;
+ (id)awemeTemplateListJSONTransformer;
+ (id)collectionTabJSONTransformer;
+ (id)coverTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
