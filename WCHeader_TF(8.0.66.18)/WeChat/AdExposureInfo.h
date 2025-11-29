@interface AdExposureInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int startPositionType;
@property (nonatomic) unsigned int endPositionType;
@property (nonatomic) float readHeight;
@property (nonatomic) float unReadTopHeight;
@property (nonatomic) float unReadBottomHeight;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long halfStartTime;
@property (nonatomic) unsigned long long halfEndTime;
@property (nonatomic) unsigned long long allStartTime;
@property (nonatomic) unsigned long long allEndTime;

+ (void)initialize;

@end
