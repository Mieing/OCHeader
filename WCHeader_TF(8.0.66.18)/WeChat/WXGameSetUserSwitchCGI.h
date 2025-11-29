@class SetUserSwitchRequest;
@protocol WXGameSetUserSwitchCGIDelegate;

@interface WXGameSetUserSwitchCGI : WCBaseCgi

@property (retain, nonatomic) SetUserSwitchRequest *request;
@property (weak, nonatomic) id<WXGameSetUserSwitchCGIDelegate> delegate;

- (id)init;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
