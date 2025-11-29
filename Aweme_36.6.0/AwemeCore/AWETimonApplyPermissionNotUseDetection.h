@class NSArray, NSMutableDictionary, NSString;

@interface AWETimonApplyPermissionNotUseDetection : NSObject <TSPKSubscriber>

@property (retain, nonatomic) NSMutableDictionary *permissionDict;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (retain, nonatomic) NSArray *permissionAPIs;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (id)permissionAPIsArray;
- (id)getPermissionApplyInfo:(id)a0;
- (void)albumWriteReadPermission:(id)a0;
- (void)calendarWriteReadPermission:(id)a0;
- (void)setPermissionApplyInfo:(id)a0 useInfo:(id)a1;
- (void)checkForAlbumReadWritePermissionWithAPI:(id)a0;
- (void)checkForCalendarReadWritePermissionWithAPI:(id)a0;
- (BOOL)isPermissionAPI:(id)a0;
- (void)removePermissionApplyInfo:(id)a0;
- (void)setPermissionApplyInfo:(id)a0 event:(id)a1;
- (id)albumWriteAPI;
- (void)checkForReadWrite:(id)a0 info:(id)a1 api:(id)a2 event:(id)a3 dataType:(id)a4;
- (id)calendarWriteAPI;
- (void).cxx_destruct;
- (id)uniqueId;
- (id)init;
- (void)startTimer:(id)a0;

@end
