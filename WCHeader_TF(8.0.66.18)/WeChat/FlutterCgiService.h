@class FlutterCgiServiceCallback, NSString;

@interface FlutterCgiService : NSObject <FlutterCgiServiceBase>

@property (retain, nonatomic) FlutterCgiServiceCallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendAsync:(unsigned long long)a0 funcId:(long long)a1 uri:(id)a2 data:(id)a3 longPolling:(BOOL)a4 longPollingTimeout:(long long)a5 baseRequestFieldId:(long long)a6;
- (void).cxx_destruct;

@end
