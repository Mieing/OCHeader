@class NSString;

@interface ACCDRPublishEndBusinessConfiguration : NSObject <ACCDRBusinessConfiguration>

@property (retain, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:(id)a0;
- (id)routerCoordinator;
- (id)xBridgeClasses;
- (void).cxx_destruct;

@end
