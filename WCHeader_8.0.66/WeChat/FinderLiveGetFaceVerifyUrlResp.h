@class NSString;

@interface FinderLiveGetFaceVerifyUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *verifyUrl;
@property (retain, nonatomic) NSString *secverifyId;
@property (nonatomic) BOOL isNeedFaceVerify;

+ (void)initialize;

@end
