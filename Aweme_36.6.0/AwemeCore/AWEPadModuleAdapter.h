@class NSString;
@protocol AWEIpadShareService, AWEIpadLongpressService;

@interface AWEPadModuleAdapter : NSObject <AWEPadModuleAdapter>

@property (readonly, nonatomic) id<AWEIpadLongpressService> longPress;
@property (readonly, nonatomic) id<AWEIpadShareService> share;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPadModuleAdapter;
+ (Class)padSplitScreenAdapterClass;
+ (Class)weakTargetClass;

- (id)feedAutoPlayService;
- (id)getPadProtocol:(id)a0;
- (void)addRotateObserverWithRootViewController:(id)a0 observer:(id)a1;
- (void)removeRotateObserverWithRootViewController:(id)a0 observer:(id)a1;
- (id)classroomDetailAdapter;
- (id)padSplitScreenAdapter;
- (id)searchEntranceService;
- (id)pushUIService;
- (id)trackAdapter;
- (id)panelAdapter;
- (id)rotationTranslationAdapter;
- (id)interactUIService;
- (id)progressUIService;
- (id)padUIAdapter;
- (id)channelService;
- (id)longVideoPlayerService;
- (id)padUtilsInterface;
- (id)iPadPiPService;
- (id)keyboardBindingsService;
- (id)padDanmakuService;
- (id)inviteWatchGuideService;
- (id)videoPlayService;
- (id)playerAdapter;
- (id)systemSplitScreenService;
- (id)bubble;
- (id)weakTarget;

@end
