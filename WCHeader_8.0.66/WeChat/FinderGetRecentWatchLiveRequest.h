@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderGetRecentWatchLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int containerId;
@property (retain, nonatomic) NSMutableArray *containerContexts;
@property (nonatomic) unsigned int pullType;

+ (void)initialize;

@end
