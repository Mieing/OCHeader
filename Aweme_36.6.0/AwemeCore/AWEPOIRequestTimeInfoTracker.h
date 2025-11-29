@class NSString, TTHttpResponseTimingInfo, NSDate;

@interface AWEPOIRequestTimeInfoTracker : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) TTHttpResponseTimingInfo *timingInfo;

- (void)markStartRequest;
- (void)markGetResponseWithTimingInfo:(id)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;

@end
