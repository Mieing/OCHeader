@class NSString;

@interface WAJSEventHandler_makeVoIPCall : WAJSEventHandler_BaseEvent <IBrandAttrMgrExt>

@property (retain, nonatomic) NSString *m_nsUsername;
@property (retain, nonatomic) NSString *m_nsNickname;
@property (retain, nonatomic) NSString *m_nsIconUrl;
@property (retain, nonatomic) NSString *m_nsAppId;
@property (retain, nonatomic) NSString *m_context;
@property (nonatomic) unsigned int m_uGetContactInfoTryTimes;
@property (nonatomic) BOOL m_bAllowBackCamera;
@property (nonatomic) BOOL m_bShowCSVideo;

- (void)handleJSEvent:(id)a0;
- (void)makeVoIPCall:(id)a0;
- (void)onBrandContactModified:(id)a0 withAttrChanged:(id)a1;
- (void)getAndSaveBrandInfo;
- (void).cxx_destruct;

@end
