@class NSString, FansclubMeResult_CheckInNodeGuidance_ClubTaskCheckInData, HTSLiveImage, NSMutableArray, FansclubMeResult_CheckInNodeGuidance_UserCheckInInfo;

@interface FansclubMeResult_CheckInNodeGuidance : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *descArray;
@property (readonly, nonatomic) unsigned long long descArray_Count;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) FansclubMeResult_CheckInNodeGuidance_ClubTaskCheckInData *checkInData;
@property (nonatomic) BOOL hasCheckInData;
@property (retain, nonatomic) FansclubMeResult_CheckInNodeGuidance_UserCheckInInfo *userCheckInInfo;
@property (nonatomic) BOOL hasUserCheckInInfo;

+ (id)descriptor;

@end
