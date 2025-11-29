@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLivePresentationCheckRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int fileType;
@property (retain, nonatomic) NSString *fileUrl;
@property (retain, nonatomic) NSString *fileMd5;

+ (void)initialize;

@end
