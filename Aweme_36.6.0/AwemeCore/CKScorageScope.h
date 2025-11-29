@class NSSet, CKScorageCOWMap;
@protocol CKScorageScopeRecorder;

@interface CKScorageScope : NSObject <NSMutableCopying>

@property (class, readonly, nonatomic) NSSet *supportedContainer;

@property (retain, nonatomic) CKScorageCOWMap *bizModels;
@property (retain, nonatomic) CKScorageCOWMap *bindedBizModels;
@property (weak, nonatomic) id<CKScorageScopeRecorder> recorder;

- (void)removeByClass:(Class)a0 error:(id *)a1;
- (id)get:(Class)a0 error:(id *)a1;
- (id)getAll:(Class)a0 error:(id *)a1;
- (id)get:(Class)a0 bindTo:(id)a1 error:(id *)a2;
- (void)removeByClass:(Class)a0 bindTo:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)set:(id)a0 error:(id *)a1;
- (void)remove:(id)a0 error:(id *)a1;

@end
