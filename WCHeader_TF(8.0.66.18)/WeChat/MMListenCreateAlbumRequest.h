@class BaseRequest, NSString, MMListenReportClientInfo;

@interface MMListenCreateAlbumRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL isAutoReplaceMv;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) int verifyStatus;
@property (nonatomic) BOOL isPublic;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int playlistType;
@property (retain, nonatomic) MMListenReportClientInfo *reportClientInfo;

+ (void)initialize;

@end
