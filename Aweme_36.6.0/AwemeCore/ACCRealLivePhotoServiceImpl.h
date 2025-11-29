@class ACCCameraSubscription, NSString;
@protocol ACCRealLivePhotoServiceDelegate;

@interface ACCRealLivePhotoServiceImpl : NSObject <ACCRealLivePhotoService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<ACCRealLivePhotoServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeLivePhotoToMode:(unsigned long long)a0;
- (void)updateLivePhotoBarItem;
- (void)notifyWillChangeLivePhotoMode:(unsigned long long)a0;
- (void)notifyDidChangeLivePhotoMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
