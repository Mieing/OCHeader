@class NSString, RedEnvelopesLiteappJumpInfo, BaseResponse;

@interface GetRedPacketFissionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL showFission;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *logoMd5;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL showUserWant;
@property (retain, nonatomic) RedEnvelopesLiteappJumpInfo *coverSetLiteappInfo;
@property (retain, nonatomic) NSString *userWantSign;

+ (void)initialize;

@end
