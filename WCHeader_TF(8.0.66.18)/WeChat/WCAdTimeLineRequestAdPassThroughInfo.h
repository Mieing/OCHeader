@class NSString, WCAdTimelineAdLocalRecords, NSArray, WCAdPassThroughPullRecords;

@interface WCAdTimeLineRequestAdPassThroughInfo : NSObject

@property (retain, nonatomic) NSString *ua;
@property (retain, nonatomic) NSString *sessionKeyAd;
@property (retain, nonatomic) NSString *supportCapability;
@property (retain, nonatomic) NSString *commonDeviceId;
@property (retain, nonatomic) WCAdPassThroughPullRecords *adPullRecords;
@property (retain, nonatomic) NSString *vangoghLibVersion;
@property (retain, nonatomic) WCAdTimelineAdLocalRecords *localAdRecords;
@property (retain, nonatomic) NSArray *sessionRecords;
@property (retain, nonatomic) NSString *topFeedSnsId;
@property (nonatomic) int topFeedPos;
@property (retain, nonatomic) NSString *timelineSessionId;

- (void).cxx_destruct;

@end
