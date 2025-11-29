@class NSDictionary, AWESearchCachalotCommentBottomBarConfigModel, AWESearchCachalotVerticalBottomBarConfigTopicDiscussExtraModel;

@interface AWESearchCachalotVerticalBottomBarConfigModel : NSObject

@property (nonatomic) long long bottomBarType;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWESearchCachalotCommentBottomBarConfigModel *commentBarConfig;
@property (retain, nonatomic) AWESearchCachalotVerticalBottomBarConfigTopicDiscussExtraModel *topicDiscussExtraConfig;
@property (nonatomic) BOOL shouldRemoveBottom;

- (void).cxx_destruct;

@end
