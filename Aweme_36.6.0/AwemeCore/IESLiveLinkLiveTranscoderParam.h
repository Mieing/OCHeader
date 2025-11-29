@class IESLiveLinkLiveRtc, NSString, IESLiveLinkRTCInteractTranscodeAVParams;
@protocol ILiveTranscoderEventDelegate, ILiveTranscoderAVDataSink;

@interface IESLiveLinkLiveTranscoderParam : NSObject

@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodeAVParams *avParam;
@property (weak, nonatomic) IESLiveLinkLiveRtc *rtcEngineKit;
@property (nonatomic) long long interactMixType;
@property (copy, nonatomic) NSString *publishUrl;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *taskId;
@property (weak, nonatomic) id<ILiveTranscoderEventDelegate> eventDelegate;
@property (weak, nonatomic) id<ILiveTranscoderAVDataSink> AVDataSink;
@property (nonatomic) BOOL byteAudioModeEnable;
@property (nonatomic) BOOL extraPublish;
@property (nonatomic) long long pushStreamMode;

- (void).cxx_destruct;

@end
