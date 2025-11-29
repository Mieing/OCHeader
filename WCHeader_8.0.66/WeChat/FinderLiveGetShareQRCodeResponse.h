@class FinderLiveShareLiveQRCodeInfo, BaseResponse;

@interface FinderLiveGetShareQRCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveShareLiveQRCodeInfo *shareLiveQrCodeInfo;
@property (nonatomic) unsigned int isSpamModPic;

+ (void)initialize;

@end
