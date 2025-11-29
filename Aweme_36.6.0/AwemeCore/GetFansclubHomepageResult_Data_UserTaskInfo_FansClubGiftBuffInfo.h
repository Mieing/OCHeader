@class NSString, HTSLiveImage;

@interface GetFansclubHomepageResult_Data_UserTaskInfo_FansClubGiftBuffInfo : IESLivePBBaseMessage

@property (nonatomic) long long rawGiftId;
@property (nonatomic) long long buffLevel;
@property (retain, nonatomic) HTSLiveImage *buffIcon;
@property (nonatomic) BOOL hasBuffIcon;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) long long diamondAmount;
@property (nonatomic) long long activityRatio;
@property (nonatomic) long long intimacyRatio;
@property (copy, nonatomic) NSString *giftName;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end
