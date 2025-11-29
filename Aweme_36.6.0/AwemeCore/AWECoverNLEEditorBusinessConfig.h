@class NSString;

@interface AWECoverNLEEditorBusinessConfig : NSObject <ACCBusinessConfiguration>

@property (retain, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:(id)a0;
- (id)routerCoordinator;
- (id)initWithInputData:(id)a0;
- (void)injectEditViewContainerWithServiceContainer:(id)a0;
- (void)configSequenceEditServiceWithInputData:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;

@end
