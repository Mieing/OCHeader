@class NSString, UIView;
@protocol IESGCPCGLayerViewProtocol;

@interface IESGCPCGLayerGroupManager : NSObject <IESGCPDIContextSubscriber, IESGCPCGLayerGroup>

@property (retain, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIView<IESGCPCGLayerViewProtocol> *gameViewContainer;
@property (retain, nonatomic) UIView<IESGCPCGLayerViewProtocol> *gameOverlayViewContainer;
@property (retain, nonatomic) UIView<IESGCPCGLayerViewProtocol> *draggableViewContainer;
@property (retain, nonatomic) UIView<IESGCPCGLayerViewProtocol> *weakTipsViewContainer;
@property (retain, nonatomic) UIView<IESGCPCGLayerViewProtocol> *strongTipsViewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (id)initWithRootView:(id)a0;
- (void)setupContainers;
- (void)allItemViewConvertToOrientation:(long long)a0;
- (void).cxx_destruct;

@end
