@class NSString, NSDate;

@interface AWEMVChannelRealTimeBannerRecordModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *bannerID;
@property (nonatomic) unsigned long long showStrategy;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) unsigned long long todayShowTimes;
@property (retain, nonatomic) NSDate *lastShownDate;
@property (nonatomic) BOOL hasClosed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
