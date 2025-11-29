@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetLiveMicCandidateListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *liveJumpinfoCgiBuff;

+ (void)initialize;

@end
