@class NSString;

@interface IESLiveNativeAppEntranceMonitorModel : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *entranceType;
@property (copy, nonatomic) NSString *entranceSource;
@property (copy, nonatomic) NSString *stage;
@property (copy, nonatomic) NSString *stageDesc;
@property (retain, nonatomic) NSString *stageExtra;
@property (nonatomic) double duration;

- (void).cxx_destruct;

@end
