@class EmotionCDNUrl, PanelDesignerIPInfo, BaseResponse;

@interface ExchangeEmotionPackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) EmotionCDNUrl *downloadInfo;
@property (retain, nonatomic) PanelDesignerIPInfo *updatePanelDesignerIpinfo;

+ (void)initialize;

@end
