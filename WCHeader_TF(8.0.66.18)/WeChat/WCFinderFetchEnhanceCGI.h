@class WCFinderFetchEnhanceCgiParams, NSString, WCFinderFetchEnhanceCgiStatusParams, WCFinderFetchEnhanceCgiStreamParams;

@interface WCFinderFetchEnhanceCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceID;
@property (nonatomic) int viewScene;
@property (nonatomic) int eventType;
@property (nonatomic) int streamType;
@property (retain, nonatomic) WCFinderFetchEnhanceCgiStreamParams *streamParams;
@property (retain, nonatomic) WCFinderFetchEnhanceCgiStatusParams *statusParams;
@property (retain, nonatomic) WCFinderFetchEnhanceCgiParams *optionalParams;

- (id)initWithTid:(id)a0 nonceID:(id)a1 viewerScene:(int)a2 eventType:(int)a3 enhanceStreamType:(int)a4 streamParams:(id)a5 statusParams:(id)a6 optionalParams:(id)a7 successful:(id /* block */)a8 failure:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
