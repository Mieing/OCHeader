@class HTSLiveUser, IESLiveUserProfile;

@interface IESLiveUserProfileData : IESLivePBBaseMessage

@property (nonatomic) BOOL isCache;
@property (nonatomic) unsigned long long cacheDataSource;
@property (retain, nonatomic) IESLiveUserProfile *userProfile;
@property (nonatomic) BOOL hasUserProfile;
@property (retain, nonatomic) HTSLiveUser *userData;
@property (nonatomic) BOOL hasUserData;

+ (id)descriptor;

@end
