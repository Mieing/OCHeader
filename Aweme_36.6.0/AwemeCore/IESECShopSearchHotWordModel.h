@class NSString, IESECURLModel;

@interface IESECShopSearchHotWordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *wordId;
@property (copy, nonatomic) NSString *word;
@property (nonatomic) unsigned long long wordsType;
@property (retain, nonatomic) IESECURLModel *wordsIcon;
@property (nonatomic) BOOL hasNativeIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
