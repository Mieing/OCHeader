@class UIView, NSString, IESLiveInteractDynamicContainerFeedComponent, IESLiveDynamicContainerLoader, HTSLiveRoom;
@protocol IESLiveInteractDynamicContainerProvider, IESLiveDynamicWrdsRegisterService;

@interface IESLiveDynamicContainerFeedService : NSObject

@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) IESLiveDynamicContainerLoader *loader;
@property (retain, nonatomic) IESLiveInteractDynamicContainerFeedComponent *interactComponent;
@property (retain, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicContainerProvider;
@property (retain, nonatomic) id<IESLiveDynamicWrdsRegisterService> dynamicWrdsRegisterService;
@property (nonatomic) BOOL isFullScreenPreStreamView;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) UIView *containerView;

- (void)onUserEnterLiveRoom;
- (void)preloadElement;
- (void)onUserQuitLiveRoom;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
