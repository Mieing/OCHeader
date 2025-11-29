@class NSString, AWENearbyGrouponListDataResponse, NSDictionary;

@interface AWENearbyGrouponListDataResponseTrackModel : NSObject

@property (retain, nonatomic) AWENearbyGrouponListDataResponse *rsp;
@property (nonatomic) long long pullType;
@property (nonatomic) double reqStartTime;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double ditoParseDuration;
@property (copy, nonatomic) NSDictionary *extraTrackParams;

- (void).cxx_destruct;

@end
