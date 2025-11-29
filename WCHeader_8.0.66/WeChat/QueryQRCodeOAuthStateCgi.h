@class NSString;

@interface QueryQRCodeOAuthStateCgi : WCBaseCgi

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int lastErrcode;
@property (nonatomic) BOOL isCancel;
@property (copy, nonatomic) NSString *sdkToken;
@property (nonatomic) BOOL hasHandleEcdhRollback;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithUUID:(id)a0 lastErrcode:(unsigned int)a1 isCancel:(BOOL)a2 sdkToken:(id)a3;
- (void)createRequest;
- (void)startWithCompletion:(id /* block */)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
