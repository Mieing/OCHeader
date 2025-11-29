@class NSArray, NSMutableDictionary, NSDictionary;

@interface AWESearchBasicContainerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *searchExitTransitionDict;
@property (copy, nonatomic) NSArray *functionAssembleArray;
@property (copy, nonatomic) NSDictionary *functionAssembleDict;

+ (void)handleContainerFunctionAssembleWithConfig:(id)a0;
+ (id)shareInstance;

- (id)searchContainerCustomExitTransitionKeyWith:(Class)a0;
- (id)searchTransitionStringWithKey:(id)a0;
- (id)searchInteractiveTransitionWith:(id)a0;
- (BOOL)pageNeedFunctionAssembleWithSearchType:(id)a0;
- (id)getFunctionAssembleDictWithType:(id)a0;
- (id)exitTransitionStrWith:(unsigned long long)a0;
- (id)transitionFunctionAssembleDictFromArray:(id)a0;
- (void)registExitTransitionWithClassStr:(id)a0 TransitionType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
