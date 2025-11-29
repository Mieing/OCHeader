@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetFollowListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int sortType;

+ (void)initialize;

@end
