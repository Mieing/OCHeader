@class NSString, NSError, NSURLConnection;

@interface QBSpeedItem : NSObject <NSURLConnectionDataDelegate> {
    NSURLConnection *_connection;
    double _startTime;
    id /* block */ _completionBlock;
}

@property (retain, nonatomic) NSString *hostString;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSError *errorInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHostString:(id)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (void)cancel;
- (void)markFinished;
- (void)notifyFinished;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void).cxx_destruct;

@end
