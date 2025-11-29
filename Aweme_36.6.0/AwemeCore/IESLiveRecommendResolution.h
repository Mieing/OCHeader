@class NSString;

@interface IESLiveRecommendResolution : NSObject

@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) NSString *preScheduleKey;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) NSString *recommendLevel;
@property (retain, nonatomic) NSString *recommendKey;

- (void).cxx_destruct;

@end
