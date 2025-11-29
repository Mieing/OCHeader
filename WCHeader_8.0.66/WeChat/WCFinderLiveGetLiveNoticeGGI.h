@class NSString, FinderLivePermissionVerifyInfo, NSArray;

@interface WCFinderLiveGetLiveNoticeGGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned long long lastNoticeCreateTime;
@property (nonatomic) unsigned int pageOrder;
@property (retain, nonatomic) NSArray *noticeAggregateTypeArray;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithNoticeId:(id)a0 verifyInfo:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (id)initNextPageCGIWithAnchorFinderUsername:(id)a0 afterNoticeCreateTime:(unsigned long long)a1 aggregateTypeArray:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (id)initPreviousPageCGIWithAnchorFinderUsername:(id)a0 beforeNoticeCreateTime:(unsigned long long)a1 aggregateTypeArray:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
