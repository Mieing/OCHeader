@class NSString;
@protocol ACCBusinessTemplate, IESServiceRegister, IESServiceProvider, ACCRouterCoordinatorProtocol;

@interface ACCBusinessConfigurationCache : NSObject <ACCBusinessConfiguration, NSCopying>

@property (retain, nonatomic) id inputData;
@property (retain, nonatomic) id<ACCBusinessTemplate> businessTemplate;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> businessServiceContainer;
@property (retain, nonatomic) id<ACCRouterCoordinatorProtocol> routerCoordinator;
@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> parentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
