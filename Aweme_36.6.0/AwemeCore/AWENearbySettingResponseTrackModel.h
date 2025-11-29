@class NSDictionary, NSError, AWENearbySettingsResponse;

@interface AWENearbySettingResponseTrackModel : NSObject

@property (retain, nonatomic) AWENearbySettingsResponse *model;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long style;
@property (nonatomic) double requestDuration;
@property (nonatomic) double requestStartTime;

- (void).cxx_destruct;

@end
