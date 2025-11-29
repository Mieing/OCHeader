@class NSURL, NSString;

@interface MMAlbumChangeObserver : MMRootService <PHPhotoLibraryChangeObserver, MMServiceProtocol>

@property (nonatomic) BOOL observerRegistered;
@property (nonatomic) unsigned int lastChangeTime;
@property (retain, nonatomic) NSURL *lastCaptureAssetURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)enableChangeObserver;
- (void)registerObserver;
- (void)unregisterObserver;
- (BOOL)hasRegisterObserver;
- (BOOL)isPhotoChangedInSecond:(long long)a0;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;

@end
