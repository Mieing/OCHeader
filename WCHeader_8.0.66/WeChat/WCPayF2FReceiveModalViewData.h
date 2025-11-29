@class NSString;

@interface WCPayF2FReceiveModalViewData : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) NSString *headImageUrl;
@property (nonatomic) unsigned int qrcodeLevel;
@property (retain, nonatomic) NSString *confirmBtn;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *receiverInfo;

- (id)initWithF2FMiniProgramConfirmRcvrResp:(id)a0;
- (void).cxx_destruct;

@end
