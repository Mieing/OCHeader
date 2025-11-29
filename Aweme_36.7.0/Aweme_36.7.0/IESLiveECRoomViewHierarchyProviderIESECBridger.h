@class NSString;
@protocol HTSLiveViewHierarchyProvider;

@interface IESLiveECRoomViewHierarchyProviderIESECBridger : NSObject <IESLiveECRoomViewHierarchyProvider>

@property (retain, nonatomic) id<HTSLiveViewHierarchyProvider> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (id)popupContainer;
- (struct CGSize { double x0; double x1; })popupContainerSize;
- (void)hideViewWhenKeyboardShow:(id)a0;
- (void)addElementViewToContainerService:(id)a0;
- (void)removeElementViewFromContainerServiceWithType:(unsigned long long)a0;
- (BOOL)isContainerServiceExist:(id)a0;
- (id)createPluginView;
- (id)upRightContainer;
- (id)pluginLayoutService;
- (id)xLiveContainerService;
- (id)rootViewController;
- (void).cxx_destruct;
- (id)containerView;
- (id)contentContainer;
- (id)mediaContainer;

@end
