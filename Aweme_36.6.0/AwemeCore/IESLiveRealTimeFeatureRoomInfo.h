@class NSString, NSMutableDictionary, IESLiveRealTimeFeatureRoomVQScore, NSDictionary;

@interface IESLiveRealTimeFeatureRoomInfo : NSObject

@property (copy, nonatomic) NSString *anchorID;
@property (nonatomic) long long roomID;
@property (nonatomic) long long anchorLayer;
@property (nonatomic) long long anchorInteraction;
@property (nonatomic) long long fetchTime;
@property (retain, nonatomic) IESLiveRealTimeFeatureRoomVQScore *VQScore;
@property (retain, nonatomic) NSMutableDictionary *roomInfoDict;
@property (copy, nonatomic) NSDictionary *userToneDict;
@property (nonatomic) long long audioQuality;

- (void).cxx_destruct;

@end
