@class AWEStudioRepoLiveModel, AWEPublishPushToTableViewCell;

@interface AWEPostPageLiveScreenRecordElement : AWEPostPageCellElement

@property (retain, nonatomic) AWEPublishPushToTableViewCell *publishToTableViewCell;
@property (readonly, nonatomic) AWEStudioRepoLiveModel *liveModel;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)publishViewModel;
- (void)setupCell:(id)a0;
- (void)p_publishToCellClicked;
- (void).cxx_destruct;
- (id)service;
- (id)privacy;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (id)cell;
- (void)didSelect;

@end
