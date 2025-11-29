@interface WeChat.WCPaySessionInfoRecorder : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ jsapiInfoMap;
}

@property (class, nonatomic, readonly) long long commonSendTypeValue;

+ (long long)chatTypeValueFromGetUrlInfoSession:(id)a0 msgUserName:(id)a1;
+ (long long)chatTypeValueFromTimeline:(id)a0;
+ (long long)chatTypeValueFromTalker:(id)a0;
+ (long long)sendTypeValueFromSender:(id)a0;

- (void)setJsApiPayInfoWithIdentifier:(id)a0 data:(id)a1;
- (void)setJsApiPayInfoWithOpenParam:(id)a0 data:(id)a1;
- (void)setJsApiPayInfoWithOpenParam:(id)a0 finderReportData:(id)a1;
- (id)getJsApiPayInfoWithUsername:(id)a0 appId:(id)a1 mpShortLink:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
