@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderUpdateLiveSongStateReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *songName;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
