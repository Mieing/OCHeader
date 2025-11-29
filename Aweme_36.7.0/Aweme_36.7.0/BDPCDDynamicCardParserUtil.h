@class NSDictionary, BDPCDDynamicCardParserConfig;

@interface BDPCDDynamicCardParserUtil : NSObject

@property (copy, nonatomic) NSDictionary *staticData;
@property (copy, nonatomic) NSDictionary *localData;
@property (retain, nonatomic) BDPCDDynamicCardParserConfig *config;
@property (nonatomic) BOOL canParse;
@property (copy, nonatomic) NSDictionary *dynamicData;
@property (readonly, copy, nonatomic) NSDictionary *originContextDict;
@property (nonatomic) long long encodeType;
@property (copy, nonatomic) id /* block */ errorTrackTrackCallback;

+ (id)transferKeyWithEncodeType:(long long)a0 keyStr:(id)a1;
+ (id)jsonCrushSwap:(id)a0 isForward:(BOOL)a1;
+ (id)swapInternal:(id)a0 swapGroupsItem:(id)a1;
+ (id)abbreviationDict;
+ (id)parseJsonCrushString:(id)a0;

- (void)updateLocalData:(id)a0;
- (id)mergeLocalData:(id)a0 localData:(id)a1;
- (id)recursiveMergeOfDict:(id)a0 withDict:(id)a1;
- (id)parserCardModelLoopWithContent:(id)a0 contextDict:(id)a1;
- (id)parserRoleDataWithContent:(id)a0 contextDict:(id)a1;
- (id)parserExpressionWithContent:(id)a0 contextDict:(id)a1;
- (id)parserCustomActionWithContent:(id)a0 contextDict:(id)a1;
- (id)parserElemenWithContent:(id)a0 contextDict:(id)a1;
- (id)expressionStrWithExpression:(id)a0 anyType:(BOOL)a1 contextDict:(id)a2;
- (id)roleTypeStrWithType:(long long)a0;
- (id)platformTypeStrWithType:(long long)a0;
- (id)parseItemArrWithExpressionRepeatDict:(id)a0 contextDict:(id)a1;
- (BOOL)canShowItemWithCondition:(id)a0 levelMaterialName:(id)a1;
- (id)parserSingleExpressionWithExpression:(id)a0 contextDict:(id)a1;
- (id)removeNullItem:(id)a0;
- (id)initWithStaticData:(id)a0 config:(id)a1;
- (void)deepUpdateLocalData:(id)a0;
- (id)parserCardModelLoopWithContent:(id)a0;
- (id)parserCustomActionWithContent:(id)a0;
- (void).cxx_destruct;

@end
