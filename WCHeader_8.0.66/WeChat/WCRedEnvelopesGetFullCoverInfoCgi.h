@class CMessageWrap;
@protocol WCRedEnvelopesGetFullCoverInfoCgiDelegate;

@interface WCRedEnvelopesGetFullCoverInfoCgi : WCPayBaseCgi

@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (weak, nonatomic) id<WCRedEnvelopesGetFullCoverInfoCgiDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0 messageWrap:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
