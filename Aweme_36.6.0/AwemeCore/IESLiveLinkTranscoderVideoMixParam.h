@class IESLiveLinkLiveVideoMixParam, NSString, IESLiveLinkRTCEngineManager;
@protocol IESLiveLinkTranscoderDataDelegate, IESLiveLinkTranscoderEventDelegate;

@interface IESLiveLinkTranscoderVideoMixParam : NSObject

@property (retain, nonatomic) IESLiveLinkLiveVideoMixParam *avParam;
@property (nonatomic) long long interactMixType;
@property (copy, nonatomic) NSString *publishUrl;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *taskId;
@property (weak, nonatomic) id<IESLiveLinkTranscoderEventDelegate> eventDelegate;
@property (weak, nonatomic) id<IESLiveLinkTranscoderDataDelegate> AVDataSink;
@property (nonatomic) BOOL extraPublish;
@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (nonatomic) long long pushStreamMode;

- (void).cxx_destruct;

@end
