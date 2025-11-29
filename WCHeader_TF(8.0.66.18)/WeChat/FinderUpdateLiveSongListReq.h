@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderUpdateLiveSongListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *songNames;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
