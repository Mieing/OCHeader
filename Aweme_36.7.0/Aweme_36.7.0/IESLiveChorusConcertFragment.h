@class IESLiveChorusConcertContainer, NSString, IESLiveChorusLinkerServiceImpl, IESLiveChorusConcertEventHandler, IESLiveChorusConcertJSBHandler;

@interface IESLiveChorusConcertFragment : IESLiveRoomComponent <IESLiveChorusConcertRouter, HTSLiveAudienceActions>

@property (retain, nonatomic) IESLiveChorusConcertContainer *concertContainer;
@property (retain, nonatomic) IESLiveChorusConcertJSBHandler *jsbHandler;
@property (retain, nonatomic) IESLiveChorusConcertEventHandler *eventHandler;
@property (retain, nonatomic) IESLiveChorusLinkerServiceImpl *chorusLinker;
@property (nonatomic) BOOL isStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)couldUnmountComponent;
- (void)askForLeave;
- (void)initChorusService:(id)a0;
- (void)closeChorusService;
- (void)askForLeaveCDN;
- (void).cxx_destruct;

@end
