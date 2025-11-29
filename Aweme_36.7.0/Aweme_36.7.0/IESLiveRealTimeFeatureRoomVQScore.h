@class NSArray;

@interface IESLiveRealTimeFeatureRoomVQScore : NSObject

@property (nonatomic) float offlineScore;
@property (nonatomic) long long timeStamp;
@property (retain, nonatomic) NSArray *onlineVQScoreAllLevels;

- (void).cxx_destruct;

@end
