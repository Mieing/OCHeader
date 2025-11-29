@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveAnchorGetPromoteJumpInfoListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int requestScene;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
