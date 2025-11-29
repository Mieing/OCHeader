@class NSMutableDictionary;

@interface IESLiveInteractDynamicElementInfoCacheModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *elementInfos;

+ (id)elementModelClass;

- (id)updateValueWithItemId:(id)a0 params:(id)a1;
- (void)removeWithCacheItems:(id)a0;
- (void).cxx_destruct;

@end
