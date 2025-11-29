@class NSString, UIView;
@protocol IESLiveRoomService;

@interface IESLiveVSChorusConcertPlayerManager : NSObject <IESLiveChorusConcertActions, HTSLiveStreamPlayerAction, IESLiveFIFAPlayerScaleAction>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) UIView *rtcView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)onChorusStateChanged:(long long)a0;
- (void)onLinkSuccess:(id)a0;
- (void)onOrientationTransitionEnd:(long long)a0;
- (void)layoutForPlayerView;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
