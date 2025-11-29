@class NSDictionary, HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveMonitor, IESLiveCertifyCenter;

@interface IESLiveSendGiftAPIImpl : HTSLiveApi <IESLiveSendGiftAPI>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveCertifyCenter> certifyCenter;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (copy, nonatomic) NSDictionary *sendGiftExtraParams;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL enableGroupLiveExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendGiftWithGiftId:(id)a0 user:(id)a1 allMic:(BOOL)a2 count:(long long)a3 sendType:(long long)a4 sendScene:(unsigned long long)a5 sendToIndependentAnchor:(BOOL)a6 extra:(id)a7 callback:(id /* block */)a8;
- (void)pr_addGameExtraIfNeededWithGiftId:(id)a0 forParameters:(id)a1 extra:(id)a2;
- (void)pr_appendExtraIfNeededWithParameters:(id)a0;
- (void)pr_appendInteractiveGiftExtraInfo:(id)a0 toParameters:(id)a1;
- (void)pr_appendDouPlusInfoGiftExtraInfo:(id)a0;
- (void)pr_appendTeamFightGiftExtraInfo:(id)a0 scene:(unsigned long long)a1 toUserID:(id)a2;
- (id)pb_errorFromSpecialResponse:(id)a0 withGiftSendRequest:(id)a1 error:(id)a2;
- (void)sendGiftReportWithTraceID:(id)a0;
- (void).cxx_destruct;

@end
