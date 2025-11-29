@class IESLiveGCDTimer, NSString, UIView;
@protocol IESLiveRoomService, IESLivePlayerProtocol;

@interface IESLiveLinkmicPreloadGlobalServiceImpl : NSObject <IESLiveLinkmicPreloadGlobalService>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) IESLiveGCDTimer *protectTimer;
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)roomDidPreload:(id)a0;
- (void)preloadCancel:(id)a0;
- (void)preloadWithRoom:(id)a0 player:(id)a1 container:(id)a2;
- (BOOL)isFloatDynamicLayoutWithLinkmicEnterInfo:(id)a0;
- (void)createCutInfoForBigPartyWithLinkmicEnterInfo:(id)a0 diContext:(id)a1 completion:(id /* block */)a2;
- (void)cleanBaseInfo;
- (void).cxx_destruct;

@end
