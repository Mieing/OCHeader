@class NSString;

@interface WAReportWeAppLaunchLocation : WAReportBaseItem

@property (retain, nonatomic) NSString *longitude;
@property (retain, nonatomic) NSString *latitude;
@property (retain, nonatomic) NSString *accuracy;
@property (retain, nonatomic) NSString *speed;
@property (retain, nonatomic) NSString *altitude;
@property (retain, nonatomic) NSString *verticalAccuracy;
@property (retain, nonatomic) NSString *horizontalAccuracy;
@property (nonatomic) unsigned int cacheTime;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
