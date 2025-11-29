@class AWEIMMessageConversation, AWEIMGroupSpeakPermissionSectionModel, RxDiffableDataSourceSnapshot, IESIMGroupBlockManagerModel, AWEIMGroupSpeakModeViewModel;

@interface AWEIMGroupBlockManagerViewDataSource : NSObject

@property (nonatomic) BOOL useNewStyle;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) RxDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) AWEIMGroupSpeakModeViewModel *viewModel;
@property (retain, nonatomic) AWEIMGroupSpeakPermissionSectionModel *speakModeSection;
@property (retain, nonatomic) AWEIMGroupSpeakPermissionSectionModel *blockSwitchSection;
@property (retain, nonatomic) AWEIMGroupSpeakPermissionSectionModel *blockUserListSection;
@property (retain, nonatomic) IESIMGroupBlockManagerModel *blockManagerModel;

- (id)initWithConversation:(id)a0 useNewStyle:(BOOL)a1 blockManagerModel:(id)a2;
- (void)createSpeakModeSection;
- (void)createBlockSwitchSection;
- (void)createBlockUserListSection;
- (BOOL)groupBlockTilteDisplayable;
- (BOOL)speakModeEnable;
- (void)logInfo:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (id)title;
- (void)updateSnapshot;

@end
