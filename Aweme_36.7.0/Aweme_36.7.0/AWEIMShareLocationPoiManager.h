@class NSMutableDictionary;

@interface AWEIMShareLocationPoiManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *poiInfoDict;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)requestIMSharePOIDetailWithID:(id)a0 completion:(id /* block */)a1;
- (id)im_getShareLocationPOIInfoDataWithID:(id)a0;
- (void)im_setShareLocationPOIInfoData:(id)a0 poiID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
