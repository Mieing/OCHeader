@class AWEDetailNetworkSafeDictionary, AWEDetailNetworkSafeArray;

@interface AWEDetailNetworkManager : NSObject

@property (retain, nonatomic) AWEDetailNetworkSafeArray *fetchingArray;
@property (retain, nonatomic) AWEDetailNetworkSafeDictionary *requestTaskDic;
@property (retain, nonatomic) AWEDetailNetworkSafeDictionary *requestCompletionListDic;

+ (id)sharedInstance;

- (void)addNewRequestKey:(id)a0 requestTask:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeAllCacheForKey:(id)a0;
- (id)requestTaskForKey:(id)a0;
- (id)requestCompletionListForKey:(id)a0;
- (void)addCompletionBlock:(id /* block */)a0 forKey:(id)a1;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
