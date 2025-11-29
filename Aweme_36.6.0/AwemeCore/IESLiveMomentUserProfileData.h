@class HTSLiveUser, IESLiveMomentUserProfile;

@interface IESLiveMomentUserProfileData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveMomentUserProfile *userProfile;
@property (nonatomic) BOOL hasUserProfile;
@property (retain, nonatomic) HTSLiveUser *userData;
@property (nonatomic) BOOL hasUserData;

+ (id)descriptor;

@end
