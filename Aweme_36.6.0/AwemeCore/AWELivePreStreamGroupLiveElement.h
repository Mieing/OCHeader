@class NSString;

@interface AWELivePreStreamGroupLiveElement : AWELiveBusinessBaseElement <AWELivePreStreamSEISubscriber>

@property (copy, nonatomic) NSString *seiUpdateTs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_viewDidDisAppear;
- (void)onReceiveSEI:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)dealloc;

@end
