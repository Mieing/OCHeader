@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray, UITableView;
@protocol ChatBotPrologueMsgDataSourceDelegate;

@interface ChatBotPrologueMsgDataSource : NSObject <UITableViewDelegate, UITableViewDataSource, IChatBotVoIPExt, UIScrollViewDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *headHint;
@property (retain, nonatomic) NSMutableArray *sellHeightArr;
@property (retain, nonatomic) NSMutableDictionary *groupedPrologueMsgDict;
@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) NSMutableDictionary *cellHeightDict;
@property (retain, nonatomic) NSMutableSet *expandedSections;
@property (retain, nonatomic) NSMutableDictionary *sectionMetaInfoDic;
@property (retain, nonatomic) NSMutableSet *firstlyExposureMsgIdSet;
@property (weak, nonatomic) id<ChatBotPrologueMsgDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setupTableView:(id)a0;
- (void)layoutTableHeaderView;
- (void)updateWithPrologueMsgList:(id)a0;
- (void)checkExposedMsg;
- (id)getPrologueMsgWithSectionIndex:(id)a0;
- (long long)getAllMsgCountForSection:(long long)a0;
- (long long)getUnExposedMsgCountForSection:(long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)getCellIDWithIndexPath:(id)a0;
- (id)cellIdentifierForPrologueMsgType:(int)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)onExpandBtnClick:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)isCellFullyVisible:(id)a0;
- (void)checkFullVisibleCellWithIndesPathList:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)onRecvPrologueMsgWrapInfo:(id)a0;
- (void).cxx_destruct;

@end
