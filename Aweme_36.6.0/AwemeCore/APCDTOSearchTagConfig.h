@class NSString, NSArray;

@interface APCDTOSearchTagConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long scene;
@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSArray *tagKeyWords;
@property (nonatomic) long long searchBarScanLimit;
@property (copy, nonatomic) NSString *searchBarHint;
@property (nonatomic) BOOL albumPageShowTag;
@property (nonatomic) BOOL searchPageShowTag;
@property (copy, nonatomic) NSString *searchPageShowTagTitle;
@property (nonatomic) BOOL resultPageHideTag;
@property (nonatomic) long long maxTagCategory;
@property (copy, nonatomic) NSString *entiretyCategoryName;
@property (copy, nonatomic) NSString *tagJson;
@property (nonatomic) BOOL fetchVidFeatures;
@property (copy, nonatomic) NSString *itemId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
