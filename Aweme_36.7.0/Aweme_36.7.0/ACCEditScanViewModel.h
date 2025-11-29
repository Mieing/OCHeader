@class ACCCameraSubscription, NSString, RACSignal, RACSubject;

@interface ACCEditScanViewModel : NSObject <ACCEditScanServiceProtocol>

@property (retain, nonatomic) RACSubject *sendAutoAddScanAnythingHashtagSubject;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly, nonatomic) RACSignal *sendAutoAddScanAnythingHashtagSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeSearchPage;
- (void)openSearchPage;
- (void)sendAutoAddScanAnythingHashtagMessageWithHashtag:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;

@end
