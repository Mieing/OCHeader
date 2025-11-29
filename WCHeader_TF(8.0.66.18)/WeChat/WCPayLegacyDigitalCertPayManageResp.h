@class NSMutableArray;

@interface WCPayLegacyDigitalCertPayManageResp : WXPBGeneratedMessage

@property (nonatomic) int showCrtInfo;
@property (nonatomic) int isCrtInstall;
@property (retain, nonatomic) NSMutableArray *crtList;

+ (void)initialize;

@end
