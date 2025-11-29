@class NSString, CContact, CgiGetRewardQrcodeResp, CgiRewardPlaceOrderResp, CgiScanRewardQrcodeResp;

@interface WCPayQRCodeRewardControlData : NSObject

@property (retain, nonatomic) NSString *scanUrl;
@property (retain, nonatomic) NSString *sourceWebViewUrl;
@property (nonatomic) long long payChannel;
@property (nonatomic) long long setupViewControllerScene;
@property (nonatomic) long long payerSelectedAmount;
@property (retain, nonatomic) CContact *receiverContact;
@property (retain, nonatomic) CgiGetRewardQrcodeResp *getQRCodeResp;
@property (retain, nonatomic) CgiScanRewardQrcodeResp *scanRewardQrcodeResp;
@property (retain, nonatomic) CgiRewardPlaceOrderResp *placeOrderResp;

- (void).cxx_destruct;

@end
