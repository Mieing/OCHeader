@class NSString;

@interface WCPayOverseaFacingReceiveTransferCancelArgument : NSObject

@property (retain, nonatomic) NSString *nsRecvUsername;
@property (retain, nonatomic) NSString *nsQRCodeId;
@property (nonatomic) int iCurrency;
@property (nonatomic) unsigned int uiIsSetAmount;
@property (nonatomic) unsigned long long uiTotalAmount;

- (id)urlArgumentData;
- (void).cxx_destruct;

@end
