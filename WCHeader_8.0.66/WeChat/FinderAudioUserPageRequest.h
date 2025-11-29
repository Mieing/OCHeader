@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderAudioUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long maxId;

+ (void)initialize;

@end
