@class CgiGetShortTermQrcodeMchResp, CgiGetQrcodeUrlMchResp, CgiSaveQrcodeMchResp, VoiceOperateSwitchMchResponse, NSMutableArray;

@interface WCPayMchQRCodeControlData : NSObject

@property (retain, nonatomic) CgiGetQrcodeUrlMchResp *qrCodeUrlResp;
@property (retain, nonatomic) CgiSaveQrcodeMchResp *saveQrCodeResp;
@property (retain, nonatomic) CgiGetShortTermQrcodeMchResp *fixedQrCodeResp;
@property (retain, nonatomic) VoiceOperateSwitchMchResponse *voiceOperateResp;
@property (nonatomic) int mchCodeMoneyScene;
@property (retain, nonatomic) NSMutableArray *arrFacingReceiveMoneyPayer;

- (void).cxx_destruct;

@end
