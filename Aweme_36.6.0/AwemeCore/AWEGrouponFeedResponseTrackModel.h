@class NSDictionary, AWEGrouponListDataResponse;

@interface AWEGrouponFeedResponseTrackModel : NSObject

@property (retain, nonatomic) AWEGrouponListDataResponse *model;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) long long pullType;
@property (nonatomic) BOOL isPreRequest;
@property (nonatomic) double requestDataTime;
@property (nonatomic) double requestDuration;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double requestParamsDuration;

- (void).cxx_destruct;
- (id)init;

@end
