@class NSString, NSMutableArray;

@interface WCFinderVisibilityOrChargeSettingsCGI : WCFinderBaseCgi

@property (retain, nonatomic) NSString *qrCodeUrl;
@property (retain, nonatomic) NSMutableArray *selectChatroomArr;
@property (retain, nonatomic) NSMutableArray *selectUserNameArr;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithFinderQrCode:(id)a0 selectChatroomArr:(id)a1 selectUserNameArr:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
