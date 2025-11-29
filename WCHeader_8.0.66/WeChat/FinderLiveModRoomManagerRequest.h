@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveModRoomManagerRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int modType;
@property (retain, nonatomic) NSData *modReqBuf;

+ (void)initialize;

@end
