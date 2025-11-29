@class NSString;

@interface ACCVideoEditBusinessConfig : ACCBusinessConfiguration <ACCBusinessConfiguration>

@property (retain, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioServiceContainerCommonAdapterClass;

- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:(id)a0;
- (id)routerCoordinator;
- (id)initWithInputData:(id)a0;
- (id)aAWEStudioServiceContainerCommonAdapter;
- (void)_configSequenceEditServiceWithInputData:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;

@end
