@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveUpdateQuestionCardInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *cardSeq;

+ (void)initialize;

@end
