@class NSSet, BDXSharedPoolStrategy, NSString;

@interface BDXSharedPool : BDXPool <BDXPoolDelegate>

@property (retain, nonatomic) BDXSharedPoolStrategy *strategy;
@property (retain, nonatomic) NSSet *ignoreQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateStrategy:(id)a0;
- (BOOL)xpool:(id)a0 shouldRecycleContainer:(id)a1;
- (void)xpool:(id)a0 didRecycleContainer:(id)a1;
- (id)identifierWithURLString:(id)a0;
- (void)createCacheWithURLString:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (BOOL)recycleContainer:(id)a0;
- (id)__identifierWithoutQuery:(id)a0;
- (void)setIgnoreQuerysForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)poolType;

@end
