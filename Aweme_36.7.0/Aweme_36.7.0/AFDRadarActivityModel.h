@class NSString, NSArray, AFDRadarFollowButtonModel, AFDRadarActivityBannerModel, AWEIMMessageShowAnimationModel;

@interface AFDRadarActivityModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityInfo;
@property (copy, nonatomic) NSArray *emojiURL;
@property (nonatomic) BOOL hasEmojiIntro;
@property (retain, nonatomic) AFDRadarActivityBannerModel *bannerInfo;
@property (retain, nonatomic) AFDRadarFollowButtonModel *buttonInfo;
@property (nonatomic) BOOL hasAvtivity;
@property (retain, nonatomic) AWEIMMessageShowAnimationModel *animateModel;
@property (copy, nonatomic) NSString *groupDescriptionString;

+ (id)buttonInfoJSONTransformer;
+ (id)bannerInfoJSONTransformer;
+ (id)animateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
