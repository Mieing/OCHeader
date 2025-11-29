@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetNativeDramaListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long nativeDramaId;
@property (nonatomic) unsigned long long fromObjectId;
@property (nonatomic) unsigned int direction;
@property (retain, nonatomic) NSData *upLastbuffer;
@property (retain, nonatomic) NSData *downLastbuffer;
@property (nonatomic) unsigned int consumerMode;
@property (retain, nonatomic) NSString *exportFromObjectId;
@property (retain, nonatomic) NSString *exportNativeDramaId;

+ (void)initialize;

@end
