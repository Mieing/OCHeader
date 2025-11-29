@class NSString, NSArray, FinderLiveNoticeInfo, FinderLivePaymentSetting;

@interface WCFinderCreateLiveNoticeCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *finderUserName;
@property (copy, nonatomic) NSString *delReason;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (nonatomic) unsigned int optype;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (retain, nonatomic) NSArray *couponsStockIDs;
@property (retain, nonatomic) FinderLivePaymentSetting *paymentSetting;
@property (nonatomic) unsigned long long reportingSourceScene;
@property (copy, nonatomic) NSString *modReason;
@property (nonatomic) unsigned long long modifyFieldFlag;

- (id)initWithFinderUserName:(id)a0 liveNoticeInfo:(id)a1 optype:(unsigned int)a2 paymentSetting:(id)a3 couponsStockIDs:(id)a4 delReason:(id)a5 modifyReason:(id)a6 modifyFieldFlag:(unsigned long long)a7 reportingSourceScene:(unsigned long long)a8 successBlock:(id /* block */)a9 failureBlock:(id /* block */)a10;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
