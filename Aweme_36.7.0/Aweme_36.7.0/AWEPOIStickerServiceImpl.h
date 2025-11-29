@class ACCCameraSubscription, NSString;

@interface AWEPOIStickerServiceImpl : NSObject <AWEPOIStickerService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddPOIStickerWithLocationModel:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
