@class IESLiveImage, HTSLiveUser;

@interface IESLiveInvitePortalModel : IESLiveDynamicModel

@property (nonatomic) long long portalID;
@property (nonatomic) long long roomID;
@property (nonatomic) long long countDown;
@property (retain, nonatomic) HTSLiveUser *anchor;
@property (retain, nonatomic) HTSLiveUser *sugarDaddy;
@property (retain, nonatomic) IESLiveImage *cover;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long distributeStrategy;

- (id)initWithPortalMessage:(id)a0;

@end
