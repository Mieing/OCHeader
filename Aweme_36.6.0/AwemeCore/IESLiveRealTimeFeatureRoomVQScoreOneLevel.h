@class NSString, NSArray;

@interface IESLiveRealTimeFeatureRoomVQScoreOneLevel : NSObject

@property (retain, nonatomic) NSString *resolutionSDKKey;
@property (nonatomic) float vqScore;
@property (nonatomic) float sharpenedVqScore;
@property (retain, nonatomic) NSArray *srVQScore;

- (void).cxx_destruct;

@end
