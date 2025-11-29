@class ACCCameraSubscription, NSString;

@interface AUCBottomModeAlbumViewModel : NSObject <AUCBottomModeAlbumService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
