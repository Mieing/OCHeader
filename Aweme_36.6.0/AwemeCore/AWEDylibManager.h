@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, AWEDylibManagerAdapterProtocol;

@interface AWEDylibManager : NSObject <BCAABundleListener, HTSBootTask> {
    NSObject<OS_dispatch_queue> *_dylibPreloadQueue;
    BOOL _hasMemoryWarning;
}

@property (retain, nonatomic) NSMutableDictionary *dylibRecords;
@property (retain, nonatomic) id<AWEDylibManagerAdapterProtocol> commonAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedIntance;
+ (Class)aAWEDylibManagerAdapterProtocolClass;
+ (void)execute;

- (void)bundleWillBeLoaded:(id)a0 fromBundle:(id)a1 enterTag:(id)a2;
- (void)bundleLoadFailed:(id)a0 fromBundle:(id)a1 enterTag:(id)a2 error:(id)a3;
- (void)bundleDidLoaded:(id)a0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a1 fromBundle:(id)a2 enterTag:(id)a3 cost:(double)a4;
- (void)bundleDidActived:(id)a0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a1 fromBundle:(id)a2 enterTag:(id)a3 cost:(double)a4;
- (void)preLoadBundleDidEntered:(id)a0 fromBundle:(id)a1 enterTag:(id)a2;
- (void)bundleIsLoadedByInstanceService:(id)a0 fromBundle:(id)a1 serviceName:(id)a2 methodName:(id)a3;
- (void)preloadIfMeetRequirement:(id)a0 record:(unsigned long long)a1 needTime:(unsigned long long)a2;
- (void)executeSearchTask;
- (void)executeLiveTask;
- (id)aAWEDylibManagerAdapterProtocol;
- (void)initDylibEnterRecord;
- (void)appDidReceiveMemoryWarning;
- (void)preloadDylib:(id)a0;
- (void)recordDylibEnter:(id)a0;
- (void)preloadDylib:(id)a0 inCurrentThread:(BOOL)a1;
- (void).cxx_destruct;
- (void)execute;
- (id)init;

@end
