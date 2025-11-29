@class NSMutableDictionary;

@interface BDHMContainerViewPool : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *viewDict;
@property (retain, nonatomic) NSMutableDictionary *perfDicMap;

+ (id)shared;

- (void)setView:(id)a0 forContainerID:(id)a1;
- (void)removeforContainerID:(id)a0;
- (id)viewForContainerID:(id)a0;
- (void)setPerfDict:(id)a0 forContainerID:(id)a1;
- (id)perfDictForContainerID:(id)a0;
- (void).cxx_destruct;

@end
