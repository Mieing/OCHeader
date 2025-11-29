@class NSString, NSDictionary, IESLiveIMMessageChannel, IESLiveIMConfig;
@protocol IESLiveIMMessageReciever, IESLiveMessageConfig;

@interface IESVSSeekIMMessageClient : NSObject <IESLiveIMChannelDelegate>

@property (retain, nonatomic) id<IESLiveMessageConfig> bizConfig;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> receiver;
@property (retain, nonatomic) IESLiveIMConfig *imConfig;
@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) IESLiveIMMessageChannel *channel;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSString *currentFetchCursor;
@property (copy, nonatomic) id /* block */ fetchParametersCallback;
@property (copy, nonatomic) id /* block */ fetchCompletionCallback;
@property (nonatomic) BOOL liveEnableSeek;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channel:(id)a0 received:(id)a1;
- (id)messageFetchPath;
- (id)initWithConfig:(id)a0 receiver:(id)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
