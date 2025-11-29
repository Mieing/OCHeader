@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderSubscribeProgrammeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *programmeId;

+ (void)initialize;

@end
