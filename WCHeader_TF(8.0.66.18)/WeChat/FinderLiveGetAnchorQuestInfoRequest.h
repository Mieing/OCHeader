@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveGetAnchorQuestInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
