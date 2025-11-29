@class NSString, IESLiveGroupLiveBanner_UIConfig, NSMutableArray;

@interface IESLiveGroupLiveBanner : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESLiveGroupLiveBanner_UIConfig *uiConfig;
@property (nonatomic) BOOL hasUiConfig;
@property (retain, nonatomic) NSMutableArray *membersArray;
@property (readonly, nonatomic) unsigned long long membersArray_Count;

+ (id)descriptor;

@end
