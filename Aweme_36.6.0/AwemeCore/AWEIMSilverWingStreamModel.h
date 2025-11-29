@class NSString, NSArray;

@interface AWEIMSilverWingStreamModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long streamStatus;
@property (nonatomic) long long statusCode;
@property (nonatomic) BOOL answerFinish;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *range;
@property (copy, nonatomic) NSArray *suggestions;
@property (copy, nonatomic) NSString *subElementsSign;
@property (nonatomic) BOOL followUpLoading;
@property (copy, nonatomic) NSString *streamType;
@property (copy, nonatomic) NSArray *subElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)suggestionsJSONTransformer;
+ (id)subElementsJSONTransformer;

- (BOOL)enableThink;
- (void)nativeDynamic_checkDataWithMessageContentDict:(id)a0 beforeSuggestionIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)nativeDynamic_combineWithModel:(id)a0;
- (void)checkDataWithMessageContentDict:(id)a0 beforeSuggestionIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)combineWithModel:(id)a0;
- (BOOL)p_mergeElement:(id)a0 toElements:(id)a1 messageDict:(id)a2;
- (BOOL)p_canMergeTextWithFirst:(id)a0 second:(id)a1;
- (id)p_getMergedTextWithOriginText:(id)a0 element:(id)a1;
- (id)mergeTypes;
- (BOOL)enableXiaohe;
- (void).cxx_destruct;

@end
