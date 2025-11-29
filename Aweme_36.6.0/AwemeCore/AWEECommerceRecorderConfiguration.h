@class NSString;
@protocol ACCBusinessTemplate, ACCRouterCoordinatorProtocol;

@interface AWEECommerceRecorderConfiguration : NSObject <ACCBusinessConfiguration>

@property (retain, nonatomic) id<ACCBusinessTemplate> businessTemplate;
@property (retain, nonatomic) id<ACCRouterCoordinatorProtocol> routerCoordinator;
@property (retain, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithBridgeParams:(id)a0 inputData:(id)a1;

- (id)businessServiceContainerWithSessionContainer:(id)a0;
- (id)initWithInputData:(id)a0;
- (void).cxx_destruct;

@end
