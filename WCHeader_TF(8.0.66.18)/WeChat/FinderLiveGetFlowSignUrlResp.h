@class NSString;

@interface FinderLiveGetFlowSignUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *verifyUrl;
@property (retain, nonatomic) NSString *secverifyId;
@property (nonatomic) BOOL isNeedFlowSign;

+ (void)initialize;

@end
