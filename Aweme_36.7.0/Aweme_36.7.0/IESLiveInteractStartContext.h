@class IESLiveLinkMicAudienceInitResponse_ResponseData, IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData, NSDictionary, HTSLiveLinkMicMethod, IESLiveLinkmicLinkAudienceCreateContext, IESLiveInteractionLayout, NSString;
@protocol IESLiveRoomService;

@interface IESLiveInteractStartContext : NSObject <IESLiveInteractBuessinessStartContext>

@property (retain, nonatomic) IESLiveLinkMicAudienceInitResponse_ResponseData *responseInit;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetLinkmicInfoWithRtcInfoResponse_ResponseData *responseResume;
@property (retain, nonatomic) IESLiveLinkmicLinkAudienceCreateContext *createContext;
@property (retain, nonatomic) HTSLiveLinkMicMethod *switchSceneMessage;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long startScene;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) IESLiveInteractionLayout *startLayout;
@property (copy, nonatomic) NSString *createSource;
@property (nonatomic) long long startType;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)linkmicIdStr;
- (id)rtcExtInfo;
- (id)liveCoreExtraInfo;
- (long long)maxMcNum;
- (id)playModesArray;
- (id)chorusAccompanimentInfo;
- (id)subRtcExtInfo;
- (id)multiRtcInfo;
- (id)multiLiveCoreInfo;
- (id)clientUiInfo;
- (BOOL)supportUpdateLinkType;
- (BOOL)isFirstInit;
- (unsigned long long)sceneWithRoom:(id)a0;
- (id)chorusCDNInfo;
- (long long)uiLayoutRawValue;
- (int)mappedUiLayout;
- (BOOL)didStartBeforeEnterRoom;
- (id)initWithInitResponse:(id)a0 startScene:(unsigned long long)a1;
- (id)initWithResumeResponse:(id)a0;
- (id)initWithLinkmicLinkAudienceCreateContext:(id)a0 startScene:(unsigned long long)a1;
- (id)initWithSwitchSceneMessage:(id)a0;
- (id)playModes;
- (BOOL)playModesContain:(int)a0;
- (void).cxx_destruct;
- (unsigned long long)vendor;
- (id)functionType;
- (id)initWithRoom:(id)a0;
- (int)uiLayout;

@end
