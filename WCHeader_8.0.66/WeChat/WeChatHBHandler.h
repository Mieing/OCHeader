@class NSString, NSURL;

@interface WeChatHBHandler : NSObject <IPreEnterWechatLogicExt> {
    NSString *m_nsAppID;
    NSURL *m_nsAppUrl;
    NSString *m_nsBundleID;
    NSString *m_nsUniversalLink;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startWeChatHB:(id)a0;
- (void)cancelWeChatHB;
- (void)onPreEnterWechatDone;
- (id)parseURLParams:(id)a0;
- (void)createWeChateHB;
- (void).cxx_destruct;

@end
