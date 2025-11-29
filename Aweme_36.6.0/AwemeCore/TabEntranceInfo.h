@class NSString;

@interface TabEntranceInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tabPanelURL;
@property (copy, nonatomic) NSString *tabExtraInfo;
@property (nonatomic) long long tabId;

+ (id)descriptor;

@end
