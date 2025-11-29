@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetHistoryLiveListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL needGetRange;
@property (nonatomic) unsigned int requestScene;

+ (void)initialize;

@end
