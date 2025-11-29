@class NSString;

@interface HMDDoctorEventParams : NSObject

@property (copy, nonatomic) NSString *logType;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;

@end
