@class IESLiveInteractComponentLoaderBase, IESLivePartyKTVStageContainerView, IESLiveKTVComponentContext, IESLiveKTVCommonStore, UIView;
@protocol IESLiveRoomService;

@interface IESLivePartyKTVStageController : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLivePartyKTVStageContainerView *ktvStageContainerView;
@property (retain, nonatomic) IESLiveInteractComponentLoaderBase *loader;
@property (retain, nonatomic) IESLiveKTVComponentContext *ktvComponentContext;
@property (retain, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (nonatomic) BOOL isPreview;
@property (weak, nonatomic) UIView *containerView;

- (void)didSetAttachingDIContext;
- (void)smoothEnterRoom;
- (id)initWithRoomModel:(id)a0;
- (void)smoothExitRoom;
- (void)setupComponentLoader;
- (void)exitPartyKTV;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupViews;

@end
