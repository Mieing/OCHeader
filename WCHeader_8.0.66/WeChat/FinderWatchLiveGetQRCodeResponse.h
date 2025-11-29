@class NSString, BaseResponse;

@interface FinderWatchLiveGetQRCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *qrcodeBuffer;
@property (retain, nonatomic) NSString *token;

+ (void)initialize;

@end
