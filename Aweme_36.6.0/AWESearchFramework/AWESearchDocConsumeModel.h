@class NSString, NSDictionary;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchDocConsumeModel : AWEBaseApiModel

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> model;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long docStatus;
@property (nonatomic) unsigned long long showTime;
@property (copy, nonatomic) NSString *docID;
@property (copy, nonatomic) NSString *parentDocID;
@property (copy, nonatomic) NSString *listItemID;
@property (copy, nonatomic) NSString *cardTypeName;
@property (copy, nonatomic) NSString *docType;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) unsigned long long page;
@property (copy, nonatomic) NSString *alaSrc;
@property (nonatomic) BOOL isSingleColumn;
@property (copy, nonatomic) NSDictionary *pitayaDocFeature;
@property (copy, nonatomic) NSString *desc;

+ (void)flushWithModels:(id)a0 docFeatures:(id)a1;
+ (id)p_originalJSONKeyPathsByPropertyKey;
+ (id)docIDWithViewModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setupDataWithModel:(id)a0;
- (void)updateDisplayTypeWithModel:(id)a0;
- (id)getDocConsumeRawData;
- (id)p_getAPIKeys;
- (void)updateDisplayTypeWithConsumeModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
