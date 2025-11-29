@class NSString, HTSLiveImage;

@interface GetFansclubHomepageResult_Data_AnchorTaskInfo_AnchorTaskItem : IESLivePBBaseMessage

@property (nonatomic) int taskType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long completedNum;
@property (nonatomic) long long totalNum;

+ (id)descriptor;

@end
