@interface IESLiveRoomProfileViewCrowdedAnimationNode : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) int fansClubGuide;
@property (nonatomic) BOOL isShowVip;
@property (retain, nonatomic) id data;
@property (copy, nonatomic) id /* block */ willStartCompletion;
@property (copy, nonatomic) id /* block */ didEndCompletion;

- (void).cxx_destruct;

@end
