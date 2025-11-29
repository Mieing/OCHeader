@class NSString;

@interface WCPayOverseaGetFacingReceiveQRCodeArgument : NSObject

@property (nonatomic) unsigned int uiIsSetAmount;
@property (nonatomic) unsigned long long uiAmount;
@property (retain, nonatomic) NSString *nsDesc;
@property (nonatomic) unsigned int uiWalletType;

- (id)urlArgumentData;
- (void).cxx_destruct;

@end
