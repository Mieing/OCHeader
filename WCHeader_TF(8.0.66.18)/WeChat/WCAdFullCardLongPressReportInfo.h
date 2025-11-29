@interface WCAdFullCardLongPressReportInfo : NSObject

@property (nonatomic) unsigned long long pressStartTime;
@property (nonatomic) unsigned long long pressEndTime;
@property (nonatomic) unsigned long long result;

- (void)resetReportInfo;

@end
