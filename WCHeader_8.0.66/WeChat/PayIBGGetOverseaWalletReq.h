@class BaseRequest, NSString;

@interface PayIBGGetOverseaWalletReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int isShowTips;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *wxgVer;
@property (retain, nonatomic) NSString *osVer;
@property (retain, nonatomic) NSString *phoneType;

+ (void)initialize;

@end
