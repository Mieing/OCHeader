@class NSMutableData, WCURLSessionTask;
@protocol WKURLSchemeTask;

@interface MPOverMarsNetworkTask : NSObject

@property (retain, nonatomic) id<WKURLSchemeTask> schemeTask;
@property (retain, nonatomic) WCURLSessionTask *sessionTask;
@property (retain, nonatomic) NSMutableData *dataBuffer;

- (id)initWithSchemeTask:(id)a0 sessionTask:(id)a1;
- (void)onReceiveResponse:(id)a0;
- (void)onReceiveData:(id)a0;
- (void)onFinish;
- (void).cxx_destruct;

@end
