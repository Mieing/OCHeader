@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetVotingHistoryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
