@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveNoticeQRCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned int qrcodePosterStylesVersion;

+ (void)initialize;

@end
