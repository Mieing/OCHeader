@class NSString, NSNumber, NSDate;

@interface WCMomentsMediaPredictedResult : NSObject

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *mid;
@property (retain, nonatomic) NSNumber *isUsingVideoSourceHD;
@property (retain, nonatomic) NSDate *videoSourcePredictionStartTime;
@property (retain, nonatomic) NSDate *videoSourcePredictionEndTime;

- (void).cxx_destruct;

@end
