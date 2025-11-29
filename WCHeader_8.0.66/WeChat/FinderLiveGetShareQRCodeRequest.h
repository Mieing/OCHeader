@class BaseRequest, FinderBaseRequest;

@interface FinderLiveGetShareQRCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int qrcodePosterStylesVersion;

+ (void)initialize;

@end
