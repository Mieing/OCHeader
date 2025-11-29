@class NSString, NSArray, NSDictionary;

@interface AWEIMFTSComplexSearchConfig : NSObject <IESIMFTSComplexSearchConfigInterface>

@property (readonly, copy, nonatomic) NSString *keyword;
@property (readonly, nonatomic) long long limitCount;
@property (copy, nonatomic) NSArray *searchTypes;
@property (copy, nonatomic) NSDictionary *extTypesDict;
@property (copy, nonatomic) NSArray *excludeContentTypes;
@property (nonatomic) BOOL enableFuzzySearchV2;
@property (nonatomic) BOOL enableGroupMultiRecall;
@property (readonly, copy, nonatomic) NSArray *contentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (id)configWithKeyword:(id)a0 limitCount:(long long)a1;
+ (id)allUserSearchContentTypesExcept:(id)a0;
+ (id)allConvSearchContentTypesExcept:(id)a0;
+ (id)allGroupParticipantSearchContentTypesExcept:(id)a0;

- (id)initWithKeyword:(id)a0 limitCount:(long long)a1;
- (id)getInstanceConfigWithKeyword:(id)a0 limitCount:(long long)a1;
- (void).cxx_destruct;

@end
