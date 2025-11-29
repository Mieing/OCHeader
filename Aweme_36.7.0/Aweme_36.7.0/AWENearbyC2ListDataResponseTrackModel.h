@class NSString, AWENearbyC2ListDataResponse;

@interface AWENearbyC2ListDataResponseTrackModel : NSObject

@property (retain, nonatomic) AWENearbyC2ListDataResponse *rsp;
@property (nonatomic) long long pullType;
@property (nonatomic) double reqStartTime;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *eventName;

- (void).cxx_destruct;

@end
