@class NSString, PHChange, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CAKCommonConfigProtocol;

@interface CAKPhotoLibrary : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableArray *latestPhotoChanges;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic) BOOL isBackgroundMode;
@property (retain, nonatomic) id<CAKCommonConfigProtocol> commonConfig;
@property (retain, nonatomic) PHChange *latestPhotoChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPhotoLibrary;

- (void)notifyObserversWithChange:(id)a0 fromBackground:(BOOL)a1;
- (void)removeAllChangeObserver;
- (void)unregisterChangeObserver:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;

@end
