@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface BizPerformanceReportEvent : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onCgiGetFinderLiveInfoStartTaskId:(long long)a0 completion:(id /* block */)a1;
- (void)onCgiGetFinderLiveInfoEndTaskId:(long long)a0 isSuccess:(BOOL)a1 errorCode:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
