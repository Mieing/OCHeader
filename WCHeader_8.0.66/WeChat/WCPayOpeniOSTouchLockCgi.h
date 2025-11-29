@class NSString;
@protocol WCPayOpeniOSTouchLockCgiDelegate;

@interface WCPayOpeniOSTouchLockCgi : WCPayBaseTenPayCgi

@property (copy, nonatomic) NSString *usertoken;
@property (copy, nonatomic) NSString *model;
@property (weak, nonatomic) id<WCPayOpeniOSTouchLockCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)failWithError:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
