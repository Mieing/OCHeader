@class NSString;

@interface GetAnchorSeasonPanelResponse_TaskInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *taskTitle;
@property (copy, nonatomic) NSString *taskContent;
@property (nonatomic) long long finishedCount;
@property (nonatomic) long long targetCount;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *bgColor;

+ (id)descriptor;

@end
