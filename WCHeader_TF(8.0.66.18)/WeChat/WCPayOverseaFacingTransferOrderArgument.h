@class NSString;

@interface WCPayOverseaFacingTransferOrderArgument : NSObject

@property (nonatomic) unsigned long long uiAmount;
@property (retain, nonatomic) NSString *nsRecvUsername;
@property (retain, nonatomic) NSString *nsRecvNickname;
@property (retain, nonatomic) NSString *nsReason;
@property (retain, nonatomic) NSString *nsRecvDesc;
@property (nonatomic) int iCurrency;
@property (retain, nonatomic) NSString *nsQRCodeId;
@property (nonatomic) unsigned int uiIsSetAmount;

- (id)urlArgumentData;
- (void).cxx_destruct;

@end
