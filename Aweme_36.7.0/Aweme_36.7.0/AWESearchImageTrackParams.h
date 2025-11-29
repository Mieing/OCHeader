@class NSDictionary, NSDate;

@interface AWESearchImageTrackParams : NSObject

@property (retain, nonatomic) NSDate *prefetchStartDate;
@property (retain, nonatomic) NSDate *loadStartDate;
@property (retain, nonatomic) NSDate *loadCompleteDate;
@property (copy, nonatomic) NSDictionary *monitorInfo;

- (void).cxx_destruct;

@end
