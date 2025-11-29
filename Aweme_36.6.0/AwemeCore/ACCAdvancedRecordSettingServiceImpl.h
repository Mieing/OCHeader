@class ACCCameraSubscription, NSString, RACSubject, RACSignal, ACCAdvancedRecordSettingComponent;

@interface ACCAdvancedRecordSettingServiceImpl : NSObject <ACCAdvancedRecordSettingService>

@property (retain, nonatomic) RACSubject *updateGridLayoutSubject;
@property (weak, nonatomic) ACCAdvancedRecordSettingComponent *delegate;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly, nonatomic) RACSignal *updateGridLayoutSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendUpdateGridViewLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)openCameraGridIfNeed;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
