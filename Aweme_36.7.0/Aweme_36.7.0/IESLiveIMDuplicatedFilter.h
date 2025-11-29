@class NSString, NSMutableArray, NSMutableDictionary;
@protocol IESLiveIMFilter;

@interface IESLiveIMDuplicatedFilter : NSObject <IESLiveIMDuplicatedFilter> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _filter_rwlock;
}

@property (retain, nonatomic) NSMutableArray *receivedDataKeys;
@property (retain, nonatomic) NSMutableDictionary *receivedDataDic;
@property (nonatomic) int maxCacheSize;
@property (retain, nonatomic) id<IESLiveIMFilter> nextFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doFilter:(id)a0;
- (BOOL)shouldFilter:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
