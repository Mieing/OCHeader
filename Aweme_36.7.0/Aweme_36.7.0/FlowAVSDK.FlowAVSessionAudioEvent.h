@class NSString, _TtC9FlowAVSDK30FlowAVSessionAudioChatResponse, _TtC9FlowAVSDK25FlowAVSessionAudioASRInfo, _TtC9FlowAVSDK25FlowAVSessionAudioChatEnd, _TtC9FlowAVSDK29FlowAVSessionAudioTTSResponse, _TtC9FlowAVSDK34FlowAVSessionAudioTTSSentenceStart, _TtC9FlowAVSDK32FlowAVSessionAudioTTSSentenceEnd, _TtC9FlowAVSDK29FlowAVSessionAudioASRResponse, _TtC9FlowAVSDK24FlowAVSessionAudioASREnd, _TtC9FlowAVSDK26FlowAVSessionAudioTTSEnded;

@interface FlowAVSDK.FlowAVSessionAudioEvent : NSObject {
    void /* function */ type;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) _TtC9FlowAVSDK25FlowAVSessionAudioASRInfo *asrInfo;
@property (nonatomic, retain) _TtC9FlowAVSDK29FlowAVSessionAudioASRResponse *asrResponse;
@property (nonatomic, retain) _TtC9FlowAVSDK24FlowAVSessionAudioASREnd *asrEnd;
@property (nonatomic, retain) _TtC9FlowAVSDK30FlowAVSessionAudioChatResponse *chatResponse;
@property (nonatomic, retain) _TtC9FlowAVSDK25FlowAVSessionAudioChatEnd *chatEnd;
@property (nonatomic, retain) _TtC9FlowAVSDK34FlowAVSessionAudioTTSSentenceStart *ttsSentenceStart;
@property (nonatomic, retain) _TtC9FlowAVSDK29FlowAVSessionAudioTTSResponse *ttsResponse;
@property (nonatomic, retain) _TtC9FlowAVSDK32FlowAVSessionAudioTTSSentenceEnd *ttsSentenceEnd;
@property (nonatomic, retain) _TtC9FlowAVSDK26FlowAVSessionAudioTTSEnded *ttsEnded;
@property (nonatomic, readonly) NSString *debugDesc;

- (void).cxx_destruct;
- (id)init;

@end
