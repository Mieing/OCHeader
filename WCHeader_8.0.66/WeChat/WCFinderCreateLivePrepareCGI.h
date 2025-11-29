@class NSString, NSMutableArray;

@interface WCFinderCreateLivePrepareCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *micFinderUsername;
@property (nonatomic) unsigned long long micObjectId;
@property (nonatomic) unsigned long long micLiveId;
@property (retain, nonatomic) NSMutableArray *cachedGestures;
@property (nonatomic) int reqScene;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithFinderUsername:(id)a0 micFinderUsername:(id)a1 micObjectId:(unsigned long long)a2 micLiveId:(unsigned long long)a3 reqScene:(int)a4 success:(id /* block */)a5 failure:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)logResponseInfo:(id)a0;
- (void)preHandleForCreateLiveResponse:(id)a0;
- (void)logForQuestActivities:(id)a0;
- (void).cxx_destruct;

@end
