@class NSString, WCCanvasComponentRedEnvelopStatusInfo;

@interface WCAdShakeActionResultModel : WCAdChannelReportExtendInfoModel

@property (nonatomic) int result;
@property (nonatomic) double maxAcceleration;
@property (retain, nonatomic) NSString *twistCardId;
@property (retain, nonatomic) WCCanvasComponentRedEnvelopStatusInfo *hbCard;

- (void).cxx_destruct;

@end
