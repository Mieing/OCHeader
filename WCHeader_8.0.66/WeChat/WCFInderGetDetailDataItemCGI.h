@class NSString, WCFinderGetCommentDetailDataItemCGIParams;

@interface WCFInderGetDetailDataItemCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *encryptedID;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *uxinfo;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ failure;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long pullScene;
@property (retain, nonatomic) WCFinderGetCommentDetailDataItemCGIParams *paramsModel;
@property (copy, nonatomic) id /* block */ preloadInfoUpdateBlock;

- (id)initWithObjectId:(id)a0 encryptedID:(id)a1 nonceID:(id)a2 finderUsername:(id)a3 scene:(int)a4 pullScene:(unsigned long long)a5 paramsModel:(id)a6 success:(id /* block */)a7 failure:(id /* block */)a8;
- (void)createRequest;
- (id)customSuccessfulRetCodeArray;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)reportCGIStart;
- (void)reportCGIFinish;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;
- (void).cxx_destruct;

@end
