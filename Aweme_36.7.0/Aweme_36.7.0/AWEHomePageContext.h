@class AWEHomePageContextTabNode;

@interface AWEHomePageContext : NSObject

@property (retain, nonatomic) AWEHomePageContextTabNode *rootTabNode;
@property (retain, nonatomic) AWEHomePageContextTabNode *rootTabNode;

- (id)selectedTabIds;
- (BOOL)isSelectedWithTabId:(id)a0;
- (id)homepageTabNode;
- (id)getCurrentSelectBottomTabId;
- (BOOL)isInBottomTabWithTabId:(id)a0;
- (id)getTabNodeWithTabId:(id)a0;
- (id)getCurrentTabId;
- (BOOL)hasTabWithTabId:(id)a0;
- (id)getLinkBranchTabNodeWithTabId:(id)a0;
- (void)removeHomePageChannelWithID:(id)a0;
- (void).cxx_destruct;

@end
