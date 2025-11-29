@class HalfPage, NSString, SaveQrcodeSuccJumpInfo, BaseResponse;

@interface CgiSaveQrcodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *trueName;
@property (nonatomic) unsigned int qrcodeLevel;
@property (retain, nonatomic) HalfPage *halfPageInfo;
@property (retain, nonatomic) SaveQrcodeSuccJumpInfo *saveSuccJumpInfo;

+ (void)initialize;

@end
