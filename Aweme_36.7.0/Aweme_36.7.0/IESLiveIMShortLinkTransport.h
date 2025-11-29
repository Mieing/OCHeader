@class NSString, NSMutableDictionary, NSObject;
@protocol IESLiveIMFetcher, IESLiveIMDecoder, IESLiveIMTransportDelegate, OS_dispatch_queue;

@interface IESLiveIMShortLinkTransport : NSObject <IESLiveIMTransport> {
    int _requestID;
    double _delay;
}

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) id<IESLiveIMFetcher> fetcher;
@property (nonatomic) long long countFor503Error;
@property (copy, nonatomic) id /* block */ fallbackDelay;
@property (copy, nonatomic) id /* block */ fallbackDelayMax;
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
- (void)pollMessage;
- (BOOL)isFallbackError:(id)a0;
- (BOOL)disable503ErrorDelay;
- (void)delayPollingMessageWith503Error;
- (void)resetDelayFor503Error;
- (void)delayPollingMessage;
- (void)resetDelay;
- (void)nextPollMessageWith:(long long)a0;
- (void)increaseDelay;
- (double)currentDelayFor503Error;
- (double)delayFor503ErrorInit;
- (double)delayFor503ErrorMax;
- (void)updateFetchContext:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
