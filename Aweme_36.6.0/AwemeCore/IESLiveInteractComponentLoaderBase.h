@class IESLiveKTVComponentContext, NSArray, IESLiveInteractComponentMultiCaster, HTSEventContext, IESLiveComponentContext, NSString;
@protocol IESLiveInteractComponent, IESLiveInteractComponentLevelControl, IESLiveInteractComponentContext, IESLiveRoomService;

@interface IESLiveInteractComponentLoaderBase : NSObject <IESLiveInteractComponentRoomContext>

@property (readonly, nonatomic) NSArray *components;
@property (retain, nonatomic) IESLiveInteractComponentMultiCaster<IESLiveInteractComponent, IESLiveInteractComponentLevelControl> *multiCaster;
@property (weak, nonatomic) id<IESLiveInteractComponentContext> context;
@property (nonatomic) unsigned long long currentTarget;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) long long currentDidLoadLevel;
@property (nonatomic) long long currentDidMountLevel;
@property (nonatomic, getter=isMounted) BOOL mounted;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveKTVComponentContext *ktvComponentContext;
@property (nonatomic) unsigned long long loadScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (id)initWithScene:(unsigned long long)a0 context:(id)a1;
- (void)componentAllLiveServiceIsReady;
- (void)loadAllComponents;
- (void)loadComponentsWithLevel:(long long)a0;
- (unsigned long long)loadRole;
- (void)componentMountWithLevel:(long long)a0;
- (long long)lastLoadLevel;
- (Class)componentClassForDefineExtra:(id)a0;
- (BOOL)didLoadAllComponents;
- (void)componentsPreLoadedEnterRoom;
- (void)reloadCompoments;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)loadModule;

@end
