@interface LinkSpreadUtil : MMObject

+ (id)getDicStatParas:(id)a0 currUrl:(id)a1 preMsgIndex:(unsigned int)a2 sendMsgScene:(int)a3;
+ (void)logLinkSpead:(id)a0;
+ (id)getFromSceneForSendAppMsg:(id)a0 statExtStr:(id)a1;
+ (void)openRealTimeReport;
+ (void)logLinkSpead:(id)a0 currId:(id)a1 preUserName:(id)a2 preChatUserName:(id)a3 currUrl:(id)a4 preMsgIndex:(unsigned int)a5 currChatName:(id)a6 currChatTitle:(id)a7 currChatMemberCount:(unsigned int)a8 sendAppMsgScene:(unsigned int)a9 getA8KeyScene:(unsigned int)a10 referUrl:(id)a11 statExtStr:(id)a12 title:(id)a13 appId:(id)a14 desc:(id)a15;
+ (void)logLinkSpead:(id)a0 currId:(id)a1 preUserName:(id)a2 preChatUserName:(id)a3 currUrl:(id)a4 preMsgIndex:(unsigned int)a5 getA8KeyScene:(unsigned int)a6 referUrl:(id)a7 statExtStr:(id)a8 title:(id)a9 appId:(id)a10 desc:(id)a11;
+ (id)getAdStatExtLogStr:(id)a0;
+ (void)logViewWebView:(id)a0 getA8KeyScene:(unsigned int)a1 enterTime:(unsigned int)a2 stayTimeInMS:(unsigned long long)a3 adId:(id)a4 appId:(id)a5 referUrl:(id)a6 webViewTitle:(id)a7 webViewDesc:(id)a8 urlList:(id)a9;
+ (int)getStatSessionTypeWithUserName:(id)a0;
+ (void)logWebViewLoad:(unsigned int)a0 costTime:(unsigned int)a1 url:(id)a2 isSuccess:(BOOL)a3 getA8KeyScene:(unsigned int)a4 webViewExtralInfo:(id)a5;
+ (unsigned int)getFromScene:(id)a0;
+ (unsigned int)getChatMemberCount:(id)a0;
+ (id)getPublishIdWithDataItem:(id)a0;
+ (id)getAdUxInfoWithDataItem:(id)a0;
+ (void)adVideoExposureFromMessage:(id)a0 chatUserName:(id)a1 sourceType:(unsigned int)a2 isAutoPlay:(unsigned int)a3;
+ (void)adVideoExposureFromTimeLine:(id)a0 sourceType:(unsigned int)a1 isAutoPlay:(unsigned int)a2 fromScene:(unsigned int)a3;
+ (void)adVideoClickFromMessage:(id)a0 videoStatus:(unsigned int)a1 sourceType:(unsigned int)a2 actionType:(unsigned int)a3 destination:(unsigned int)a4 chatUserName:(id)a5;
+ (void)adVideoClickFromTimeLine:(id)a0 videoStatus:(unsigned int)a1 sourceType:(unsigned int)a2 scene:(unsigned int)a3 destination:(unsigned int)a4 actionType:(unsigned int)a5;
+ (void)onAdVideoStateChange:(unsigned int)a0;
+ (unsigned int)getActionTypeWithShareToUserName:(id)a0;
+ (void)adVideoSpreadFromMessage:(id)a0 videoStatus:(unsigned int)a1 sourceType:(unsigned int)a2 actionType:(unsigned int)a3 chatUserName:(id)a4 shareToChatUserName:(id)a5;
+ (void)adVideoSpreadFromMessage:(id)a0 currMsgId:(id)a1 videoStatus:(unsigned int)a2 sourceType:(unsigned int)a3 actionType:(unsigned int)a4 chatUserName:(id)a5 shareToChatUserName:(id)a6;
+ (void)adVideoSpreadFromTimeLine:(id)a0 videoStatus:(unsigned int)a1 sourceType:(unsigned int)a2 scene:(unsigned int)a3 actionType:(unsigned int)a4 shareToChatUserName:(id)a5;
+ (void)adVideoReport:(unsigned int)a0 logExt:(id)a1;
+ (void)adVideoSpread:(id)a0 sourcePublishId:(id)a1 sourceAdUxInfo:(id)a2 statExtStr:(id)a3;
+ (void)adPageExposureFromMessage:(id)a0 chatUserName:(id)a1;
+ (void)adPageExposureFromTimeLine:(id)a0;
+ (void)reportAdPageExposureLogWithScene:(unsigned int)a0 andStatisticsExtInfo:(id)a1 andAppMediaUrl:(id)a2 msgContent:(id)a3;

@end
