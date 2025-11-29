@class BaseRequest, FinderBaseRequest;

@interface FinderGetNativeDramaInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long dramaId;
@property (nonatomic) unsigned long long fromObjectId;
@property (nonatomic) unsigned int consumerMode;

+ (void)initialize;

@end
