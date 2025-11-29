@class NSUUID;

@interface WXPTenpayCgiWrapper : WCPayBaseTenPayCgi

@property (copy, nonatomic) id /* block */ errorCallback;
@property (copy, nonatomic) id /* block */ successCallback;
@property (copy, nonatomic) id /* block */ endCallback;
@property (retain, nonatomic) NSUUID *uuid;

- (id)init;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
