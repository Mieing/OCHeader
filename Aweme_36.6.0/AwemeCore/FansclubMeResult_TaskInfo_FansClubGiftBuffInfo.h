@class NSString, HTSLiveImage;

@interface FansclubMeResult_TaskInfo_FansClubGiftBuffInfo : IESLivePBBaseMessage

@property (nonatomic) long long rawGiftId;
@property (nonatomic) long long buffLevel;
@property (retain, nonatomic) HTSLiveImage *buffIcon;
@property (nonatomic) BOOL hasBuffIcon;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) long long diamondAmount;
@property (nonatomic) long long activityRatio;
@property (nonatomic) long long intimacyRatio;

+ (id)descriptor;

@end
