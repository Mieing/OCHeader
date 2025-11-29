@class NSDictionary, NSString;
@protocol AWESearchAIGCSSERequestManagerProtocol, AWESearchLynxSSERequestManagerDelegate;

@interface AWESearchLynxSSERequestManager : NSObject <AWESearchAIGCSSERequestManagerDelegate>

@property (retain, nonatomic) id<AWESearchAIGCSSERequestManagerProtocol> requestManager;
@property (copy, nonatomic) NSDictionary *createEventParams;
@property (copy, nonatomic) NSDictionary *extraLogParams;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *requestId;
@property (weak, nonatomic) id<AWESearchLynxSSERequestManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveAllData;
- (void)didReceiveFirstDataChunk;
- (void)didEndReadChunkForError:(id)a0 errorReason:(long long)a1 currentResponse:(id)a2;
- (void)didReceiveCommonJSON:(id)a0;
- (void)startNewStreamWithCreateEventParams:(id)a0;
- (void)impStartNewStreamWithCreateEventParams:(id)a0;
- (void)impCancelCurrentRequest;
- (void)handleDataArray:(id)a0;
- (id)stringReasonFromCSPChunkStreamBreakReason:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelCurrentRequest;

@end
