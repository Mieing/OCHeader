@class HTSEventContext, NSTimer, NSMutableDictionary, NSString, NSNumber;

@interface IESLiveMIFullLinkIndexMonitorImpl : NSObject <IESLiveMIFullLinkIndexMonitor>

@property (retain, nonatomic) NSTimer *acuTimer;
@property (retain, nonatomic) NSNumber *currentACU;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableDictionary *danmakuDataDic;
@property (retain, nonatomic) NSMutableDictionary *chatDisplayDataDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (void)trackChatSelfShow;
- (void)trackFullScreenDanmakuShowDelay;
- (void)trackPortraitDanmakuShowDelay;
- (void)trackPublicScreenDisplayStatusWithParams:(id)a0;
- (id)getCurrentFullLinkDanmakuDataModel;
- (id)getCurrentFullLinkChatDisplayDataModel;
- (void)trackDanmakuShowDelayForFullScreen:(BOOL)a0;
- (id)getChatSendParamsWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)onTimer;

@end
