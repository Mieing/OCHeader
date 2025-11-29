@class GetUserSwitchRequest;
@protocol WXGameGetUserSwitchCGIDelegate;

@interface WXGameGetUserSwitchCGI : WCBaseCgi

@property (retain, nonatomic) GetUserSwitchRequest *request;
@property (weak, nonatomic) id<WXGameGetUserSwitchCGIDelegate> delegate;

- (id)init;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
