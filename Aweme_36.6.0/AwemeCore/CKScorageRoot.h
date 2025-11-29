@class CKScorageCOWMap;
@protocol CKScorageRootRecorder;

@interface CKScorageRoot : NSObject <NSMutableCopying>

@property (retain, nonatomic) CKScorageCOWMap *scopes;
@property (weak, nonatomic) id<CKScorageRootRecorder> recorder;

+ (id)dd_dataChangeRecorder;

- (id)modelForKeypath:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)get:(Class)a0;

@end
