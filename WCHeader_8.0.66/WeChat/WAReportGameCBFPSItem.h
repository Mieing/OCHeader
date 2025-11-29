@class NSString;

@interface WAReportGameCBFPSItem : WAReportBaseItem

@property (copy, nonatomic) NSString *appname;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int useCommandBuffer;
@property (nonatomic) long long drawCall;
@property (nonatomic) long long time;
@property (nonatomic) long long fps;

- (id)reportString;
- (void).cxx_destruct;

@end
