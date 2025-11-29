@class AWESearchAIGCSubDataControllerMonitor, NSMutableDictionary, NSDictionary, AWESearchAIGCSSERequestManager, NSString;
@protocol AWESearchAIGCSubDataControllerDelegate;

@interface AWESearchAIGCSubDataController : NSObject <AWESearchAIGCSSERequestManagerDelegate>

@property (retain, nonatomic) AWESearchAIGCSSERequestManager *requestManager;
@property (retain, nonatomic) NSMutableDictionary *fEDataParams;
@property (weak, nonatomic) id<AWESearchAIGCSubDataControllerDelegate> requestDelegate;
@property (copy, nonatomic) NSDictionary *subRequestLastParams;
@property (retain, nonatomic) AWESearchAIGCSubDataControllerMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveAllData;
- (void)clearBeforeNewLink;
- (void)didReceiveCommonResponse:(id)a0;
- (void)didReceiveFirstDataChunk;
- (id)currentSearchId;
- (void)didEndReadChunkForError:(id)a0 errorReason:(long long)a1 currentResponse:(id)a2;
- (void)startNewStreamWithRequestUrl:(id)a0;
- (void)startNewStream;
- (id)dataControllerRequestUrl;
- (void)startNewStreamTrack;
- (id)subRequestParams;
- (id)dataControllerRequestRefreshParams;
- (void)cancelCurrentStream;
- (void)appendFEData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;

@end
