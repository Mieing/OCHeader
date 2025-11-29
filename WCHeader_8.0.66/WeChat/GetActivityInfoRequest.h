@class NSString, UserLocation, FinderEventBaseRequest;

@interface GetActivityInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseRequest *baseReq;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) UserLocation *userLocation;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *wxUsername;

+ (void)initialize;

@end
