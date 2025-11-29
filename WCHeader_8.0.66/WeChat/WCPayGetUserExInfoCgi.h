@class NSString;
@protocol WCPayGetUserExInfoCgiDelegate;

@interface WCPayGetUserExInfoCgi : WCPayBaseTenPayCgi

@property (copy, nonatomic) NSString *scene;
@property (weak, nonatomic) id<WCPayGetUserExInfoCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
