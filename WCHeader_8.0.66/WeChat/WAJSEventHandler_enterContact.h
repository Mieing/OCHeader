@class NSString, WASessionContentSendMsgInfo, WAContactGetter;

@interface WAJSEventHandler_enterContact : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate> {
    NSString *_sessionFrom;
    WASessionContentSendMsgInfo *_sendMsgInfo;
    WAContactGetter *_contactGetter;
}

@property (copy, nonatomic) NSString *customAppid;
@property (copy, nonatomic) NSString *customUsername;
@property (copy, nonatomic) NSString *customBusinessUsername;
@property (copy, nonatomic) NSString *customHeadImgUrl;
@property (copy, nonatomic) NSString *customTitle;
@property (copy, nonatomic) NSString *customSubTitle;
@property (nonatomic) unsigned long long customNewScene;
@property (nonatomic) unsigned int customDebugMode;
@property (nonatomic) unsigned int customWeappVersion;
@property (copy, nonatomic) NSString *customFromAppid;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (id)targetAppid;
- (id)targetUsername;
- (unsigned int)targetDebugMode;
- (unsigned int)targetWeappVersion;
- (id)targetFromAppid;
- (id)getImageDataWithImageUrl:(id)a0;
- (void)enterSession:(id)a0;
- (void)requestWithBusinessID:(id)a0 sessionFrom:(id)a1 sendMsgInfo:(id)a2;
- (void)onGetSubBusinessInfoResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
