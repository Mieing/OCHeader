@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveReportFeatureRedDotStateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *reddotId;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSData *extInfo;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *groupId;

+ (void)initialize;

@end
