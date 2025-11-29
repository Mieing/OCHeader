@class NSString, WCPayVerifyUserRealNameInfoResp;
@protocol WCPayVerifyUserRealNameInfoCgiDelegate;

@interface WCPayVerifyUserRealNameInfoCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayVerifyUserRealNameInfoCgiDelegate> cgiDelegate;
@property (retain, nonatomic) NSString *cre_id;
@property (copy, nonatomic) NSString *cre_type;
@property (retain, nonatomic) NSString *true_name;
@property (nonatomic) int verify_scene;
@property (retain, nonatomic) WCPayVerifyUserRealNameInfoResp *resp;

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void).cxx_destruct;

@end
