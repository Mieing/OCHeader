@class NSString, TranslateLinkResp_ShareMsgInfo, NSData, SdkFinderInfoResult, BaseResponse;

@interface TranslateLinkResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;
@property (retain, nonatomic) NSString *deeplink;
@property (retain, nonatomic) NSString *errWording;
@property (retain, nonatomic) TranslateLinkResp_ShareMsgInfo *shareMsgInfo;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *sdkToken;
@property (nonatomic) int actionCode;
@property (retain, nonatomic) NSString *appNickname;
@property (retain, nonatomic) NSString *appIconUrl;
@property (retain, nonatomic) NSString *redirectUrl;
@property (retain, nonatomic) NSData *wxaRuntimeBuff;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) SdkFinderInfoResult *finderInfoResult;
@property (retain, nonatomic) NSString *platformSignature;
@property (nonatomic) unsigned int shareChatScope;

+ (void)initialize;

@end
