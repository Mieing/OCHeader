@class ACCCameraSubscription, NSString, UIView, NSMutableArray;
@protocol ACCMediaContainerViewProtocol, IESServiceProvider, ACCVideoCoverModernEditorSessionProtocol, ACCEditVideoCoverMixedProtocol, ACCVideoCoverEditTemplateProtocol, ACCVideoCoverEditSessionProtocol;

@interface ACCVideoCoverEditService : NSObject <ACCVideoCoverEditServiceProtocol>

@property (retain, nonatomic) NSMutableArray *plugins;
@property (retain, nonatomic) id<ACCVideoCoverModernEditorSessionProtocol> editSession;
@property (weak, nonatomic) id<IESServiceProvider> serviceResolver;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) id<ACCEditVideoCoverMixedProtocol> videoCoverMixed;
@property (retain, nonatomic) UIView<ACCMediaContainerViewProtocol> *mediaContainerView;
@property (retain, nonatomic) id<ACCVideoCoverEditTemplateProtocol> videoCoverEditTemplate;
@property (copy, nonatomic) id /* block */ getMediaContainerViewBlock;
@property (retain, nonatomic) id<ACCVideoCoverEditSessionProtocol> editBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildEditSession;
- (id)initWithPublishModel:(id)a0;
- (void)configResolver:(id)a0;
- (id)initForPublish:(id)a0;
- (id)propertyForProtocol;
- (void)buildPlugins;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
