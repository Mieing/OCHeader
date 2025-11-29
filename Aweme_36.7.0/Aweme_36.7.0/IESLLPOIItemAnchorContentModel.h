@class NSArray, NSString, NSDictionary, IESLLPOIServiceSpuEntryModel;

@interface IESLLPOIItemAnchorContentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isEndMinorTagExpand;
@property (retain, nonatomic) NSArray *primaryTags;
@property (retain, nonatomic) NSArray *minorTags;
@property (retain, nonatomic) IESLLPOIServiceSpuEntryModel *entry;
@property (nonatomic) unsigned long long anchorType;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *anchorSuffix;
@property (nonatomic) unsigned long long anchorExplorationStyle;
@property (retain, nonatomic) NSArray *explorationIconURLs;
@property (retain, nonatomic) NSArray *primaryExplorationTags;
@property (copy, nonatomic) NSString *explorationButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minorTagsJSONTransformer;
+ (id)primaryTagsJSONTransformer;
+ (id)entryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
