@class UIButton, NSString;
@protocol IESLiveRoomService;

@interface IESLivePlayerTipViewModel : NSObject <HTSLiveStreamPlayerAction>

@property (retain, nonatomic) UIButton *tipButton;
@property (nonatomic) BOOL playeriSRender;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)streamPlayerDidReadyToRender;
- (void)onStreamProgressUpdate:(double)a0 start:(double)a1 latest:(double)a2 trackCurrentSEIts:(id)a3 callTrace:(id)a4;
- (void)showVsTipsIfNeed;
- (void)showVsTips;
- (void)touchVsTips;
- (void)changeVSFirstTipsWithOrientation:(long long)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
