@class NSArray, NSString;

@interface ACCAIGCLoraUgcPromptModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *customKeyWordList;
@property (retain, nonatomic) NSString *negativeText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customKeyWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)customKeyWordString;
- (id)customKeyWordStringInEnglishSplit;
- (void).cxx_destruct;

@end
