@class AWEIMMessageConversation, AWEIMEmoticonPanelUIConfig, NSString, NSArray, UIView, NSDictionary;

@interface AWEIMEmoticonPanelContext : AWEIMComponentContext

@property (retain, nonatomic) AWEIMEmoticonPanelUIConfig *uiConfig;
@property (weak, nonatomic) UIView *hostView;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long containerViewType;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSArray *themeInfoArray;
@property (copy, nonatomic) NSString *defaultSyncToUniqueID;
@property (copy, nonatomic) NSString *defaultSyncToUniqueIDEnterMethod;
@property (copy, nonatomic) NSDictionary *commentAdditionalInfos;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (nonatomic) double panelBeginLaunchTime;
@property (nonatomic) BOOL hasReportedPanelFirstFrame;

- (void).cxx_destruct;
- (id)init;

@end
