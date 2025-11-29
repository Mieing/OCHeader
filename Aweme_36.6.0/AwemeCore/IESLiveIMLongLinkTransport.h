@class NSString, NSMutableDictionary, NSObject;
@protocol IESLiveIMFetcher, IESLiveIMDecoder, IESLiveIMTransportDelegate, OS_dispatch_queue;

@interface IESLiveIMLongLinkTransport : NSObject <IESLiveIMTransport>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) id<IESLiveIMFetcher> fetcher;
@property (nonatomic) long long connectCount;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (retain, nonatomic) id<IESLiveIMDecoder> transportDecoder;
@property (weak, nonatomic) id<IESLiveIMTransportDelegate> delegate;
@property (nonatomic) double lastMsgTimeStamp;
@property (nonatomic) double maxMsgDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFetcher:(id)a0;
- (void)inDataQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)connect;
- (void)start;

@end
