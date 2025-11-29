@class NSString, NSDictionary, _TtC9FlowAVSDK15FlowAVTTSConfig, _TtC9FlowAVSDK15FlowAVASRConfig, _TtC9FlowAVSDK16FlowAVChatConfig;

@interface FlowAVSDK.FlowAVStartSessionConfig : NSObject {
    void /* function */ header;
    void /* function */ samiHeader;
    void /* function */ appkey;
    void /* function */ token;
    void /* function */ taskId;
    void /* unknown type, empty encoding */ business;
    void /* function */ extra;
    void /* function */ trace;
    void /* unknown type, empty encoding */ modalType;
}

@property (nonatomic, copy) NSDictionary *header;
@property (nonatomic, copy) NSDictionary *samiHeader;
@property (nonatomic, copy) NSString *appkey;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *taskId;
@property (nonatomic) long long requestType;
@property (nonatomic) long long interruptType;
@property (nonatomic, retain) _TtC9FlowAVSDK15FlowAVTTSConfig *tts;
@property (nonatomic, retain) _TtC9FlowAVSDK15FlowAVASRConfig *asr;
@property (nonatomic, retain) _TtC9FlowAVSDK16FlowAVChatConfig *chat;
@property (nonatomic, copy) NSString *extra;
@property (nonatomic, copy) NSDictionary *trace;

- (void).cxx_destruct;
- (id)init;

@end
