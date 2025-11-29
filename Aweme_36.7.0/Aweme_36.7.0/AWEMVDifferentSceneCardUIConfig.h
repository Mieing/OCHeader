@interface AWEMVDifferentSceneCardUIConfig : NSObject

@property (nonatomic) BOOL shouldShowStyleTag;
@property (nonatomic) BOOL shouldUseTwoRowAvatarAuthor;
@property (nonatomic) BOOL shouldLimitImageRatio;
@property (nonatomic) double minImageRatio;
@property (nonatomic) double maxImageRatio;
@property (nonatomic) BOOL shouldShowCardUsingFollowBackupURL;
@property (nonatomic) BOOL shouldShowDiggInsteadOfScore;
@property (nonatomic) BOOL shouldShowDurationInsteadOfEpCount;

@end
