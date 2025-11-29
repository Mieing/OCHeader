@class NSString, HTSLiveMatchEffect, IESLiveCountTimer, HTSLiveCityEffect;

@interface IESLiveInteractSeatAnimationManagerNode : NSObject

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long source;
@property (nonatomic) BOOL needShowSeatAnimation;
@property (retain, nonatomic) HTSLiveMatchEffect *matchEffect;
@property (nonatomic) BOOL needShowCityAnimation;
@property (retain, nonatomic) HTSLiveCityEffect *cityEffect;
@property (nonatomic) BOOL isShowingSeating;
@property (nonatomic) BOOL hasShowedSeating;
@property (nonatomic) BOOL isShowingCityEffect;
@property (retain, nonatomic) IESLiveCountTimer *seatAnimationCountTimer;

- (void).cxx_destruct;

@end
