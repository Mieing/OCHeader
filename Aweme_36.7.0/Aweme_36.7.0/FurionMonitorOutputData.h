@class NSString;

@interface FurionMonitorOutputData : NSObject

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *s_result;
@property (nonatomic) float f_result;
@property (nonatomic) long long errorCode;

- (void).cxx_destruct;

@end
