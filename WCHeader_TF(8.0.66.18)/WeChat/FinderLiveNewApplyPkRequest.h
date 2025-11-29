@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveNewApplyPkRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *targetFinderUsername;
@property (retain, nonatomic) NSData *randomPkBuffer;
@property (nonatomic) unsigned int applyScene;
@property (retain, nonatomic) NSData *sceneBuffer;
@property (retain, nonatomic) NSString *referMicCandidateRequestId;

+ (void)initialize;

@end
