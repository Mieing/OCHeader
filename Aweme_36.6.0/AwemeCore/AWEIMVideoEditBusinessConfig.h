@class NSString;

@interface AWEIMVideoEditBusinessConfig : NSObject <ACCBusinessConfiguration>

@property (retain, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:(id)a0;
- (id)routerCoordinator;
- (id)initWithInputData:(id)a0;
- (void)_configSequenceEditServiceWithInputData:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;

@end
