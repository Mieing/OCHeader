@class NSMutableArray, WCFinderGetFeedAsyncInfoCGIConfig;

@interface WCFinderGetFeedAsyncInfoCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) int asyncLoadInfoScene;
@property (retain, nonatomic) NSMutableArray *scenesArray;
@property (retain, nonatomic) WCFinderGetFeedAsyncInfoCGIConfig *config;

- (id)initWithObjectUidList:(id)a0 scene:(int)a1 commentScene:(int)a2 config:(id)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
- (id)initWithObjectUidList:(id)a0 scenes:(id)a1 commentScene:(int)a2 config:(id)a3 triggerScene:(int)a4 location:(id)a5 successful:(id /* block */)a6 failure:(id /* block */)a7;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
