@class NSMutableData;

@interface HMDWPDynamicSafeData : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mtx;
    BOOL _valueStored;
    NSMutableData *_data;
    void *_store;
    id _object;
}

@property unsigned long long atomicInfo;
@property (readonly, nonatomic) unsigned long long returnSize;

+ (id)safeDataStoreObject;
+ (id)safeDataWithSize:(unsigned long long)a0;

- (BOOL)getDataIfPossible:(void *)a0;
- (id)initStoreObject;
- (void)storeData:(void *)a0;
- (id)initWithLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)getObject;
- (void)dealloc;

@end
