@class WCFinderDataItem, NSString, NSData;

@interface WCFinderFeedStreamPreviewLiveCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) NSString *livePkId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) int commentScene;
@property (nonatomic) long long previewDelaySec;
@property (retain, nonatomic) NSData *multiStyleInfo;

- (id)initWithFinderFeedPreviewDataItem:(id)a0 commentScene:(int)a1 liveTaskId:(id)a2 multiStyleInfo:(id)a3 previewDelaySec:(long long)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void).cxx_destruct;

@end
