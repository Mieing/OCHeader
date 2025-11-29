@class NSDictionary, HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveCurrentMatchInfoUtil : NSObject <IESLiveCurrentMatchInfoService, HTSLiveStreamPlayerAction>

@property (retain, nonatomic) NSDictionary *lastVaildMatchInfo;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_getCurrentMatchInfoWithDIContext:(id)a0;

- (void)didSetAttachingDIContext;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (id)currentMatchInfo;
- (void)rebuildEventParams;
- (void)trackMatchContentPlay;
- (void)notifyMatchInfo;
- (void)p_changeCurrentMatchInfoWithIsContentIDChange:(BOOL)a0;
- (void)setupWithRoom:(id)a0;
- (BOOL)hasValidMatchIdAndEvenids;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
