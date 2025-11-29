@class NSString, GetFansclubHomepageResult_Data_UserTaskInfo_Button, HTSLiveImage, NSMutableArray;

@interface GetFansclubHomepageResult_Data_UserTaskInfo_Item : IESLivePBBaseMessage

@property (nonatomic) int taskType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long completedNum;
@property (nonatomic) long long totalNum;
@property (nonatomic) long long intimacyBonus;
@property (retain, nonatomic) GetFansclubHomepageResult_Data_UserTaskInfo_Button *button;
@property (nonatomic) BOOL hasButton;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) GetFansclubHomepageResult_Data_UserTaskInfo_Item *innerItem;
@property (nonatomic) BOOL hasInnerItem;
@property (nonatomic) int status;
@property (nonatomic) long long availableIntimacy;
@property (retain, nonatomic) NSMutableArray *availableBuffListArray;
@property (readonly, nonatomic) unsigned long long availableBuffListArray_Count;
@property (nonatomic) long long remainingDays;
@property (nonatomic) long long jarStoredIntimacy;

+ (id)descriptor;

@end
