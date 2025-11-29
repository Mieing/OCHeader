@class NSString;
@protocol WCPayBeforeTransferCgiDelegate;

@interface WCPayBeforeTransferCgi : WCPayBaseCgi

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *groupUsername;
@property (weak, nonatomic) id<WCPayBeforeTransferCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
