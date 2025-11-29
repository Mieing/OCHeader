@class HalfPage, NSString, SaveSuccJumpInfo, BaseResponse;

@interface CgiSaveQrcodeMchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *trueName;
@property (nonatomic) unsigned int qrcodeLevel;
@property (retain, nonatomic) HalfPage *halfPageInfo;
@property (retain, nonatomic) SaveSuccJumpInfo *saveSuccJumpInfo;

+ (void)initialize;

@end
