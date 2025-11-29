@class NSMutableArray;

@interface AWEVideoSpeedRecordManager : NSObject

@property (retain, nonatomic) NSMutableArray *records;

+ (id)getSpeedMonitorParams;
+ (void)addNewRecord:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
