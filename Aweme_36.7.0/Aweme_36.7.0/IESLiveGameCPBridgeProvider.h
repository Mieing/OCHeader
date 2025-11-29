@class IESLiveGameCPRoomInjectServicesProvider;

@interface IESLiveGameCPBridgeProvider : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESLiveGameCPRoomInjectServicesProvider *servicesProvider;

- (void)bindBridgeProviders;
- (void)unbindBridgeProviders;
- (void)createLiveContainerWidgets;
- (void)destroyLiveContainerWidgets;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;

@end
