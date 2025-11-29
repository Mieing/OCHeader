@class NSMutableDictionary, NSString, JSCProtocolAdapter, NSMutableArray;

@interface JSCTarget : NSObject {
    JSCProtocolAdapter *_adapter;
    BOOL _isConnected;
    BOOL _isNeedFilter;
    NSMutableArray *_messageBuffer;
    NSMutableDictionary *_messageFilters;
    NSMutableDictionary *_toolRequestMap;
    NSMutableDictionary *_adapterRequestMap;
    int _requestId;
    NSString *_id;
}

@property (copy, nonatomic) id /* block */ sendToTargetImpl;
@property (copy, nonatomic) id /* block */ sendToRemoteImpl;

+ (id)sharedInstance;
+ (id)jsonString:(id)a0;
+ (id)jsonParse:(id)a0;

- (id)initWithTargetId:(id)a0;
- (id)initWithTargetId:(id)a0 needFilter:(BOOL)a1;
- (void)addMessage:(id)a0 filter:(id /* block */)a1;
- (id)callTarget:(id)a0 params:(id)a1;
- (void)fireEventToRemote:(id)a0 params:(id)a1;
- (void)fireResultToRemote:(id)a0 params:(id)a1;
- (void)onMessageFromRemote:(id)a0;
- (void)onMessageFromTarget:(id)a0;
- (void).cxx_destruct;

@end
