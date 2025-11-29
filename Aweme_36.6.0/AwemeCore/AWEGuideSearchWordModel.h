@class AWEURLModel, NSString, NSDictionary, NSArray, AWEEcommerceGuideSearchAttributeTag, AWEEcommerceSearchCommonTagModel;

@interface AWEGuideSearchWordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *searchKeyWord;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *queryID;
@property (nonatomic) BOOL hasShown;
@property (retain, nonatomic) AWEURLModel *wordsImage;
@property (retain, nonatomic) AWEEcommerceSearchCommonTagModel *icon;
@property (copy, nonatomic) NSDictionary *transparentParam;
@property (copy, nonatomic) NSArray *attachedTexts;
@property (retain, nonatomic) AWEEcommerceGuideSearchAttributeTag *attributeTag;
@property (nonatomic) double maxAttachedTextsWidth;
@property (copy, nonatomic) NSDictionary *logInfo;
@property (nonatomic) BOOL selected;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic) long long searchMode;

+ (id)iconJSONTransformer;
+ (id)wordsImageJSONTransformer;
+ (id)attachedTextsJSONTransformer;
+ (id)attributeTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
