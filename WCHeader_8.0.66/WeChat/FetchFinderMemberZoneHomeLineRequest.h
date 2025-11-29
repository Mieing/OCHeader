@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FetchFinderMemberZoneHomeLineRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int seeAuthorOnly;

+ (void)initialize;

@end
