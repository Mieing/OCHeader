@class HTSEventContext, NSString, UIImageView, ItemShareListResponse_ResponseData, UITableView, NSMutableArray, UILabel, UIScrollView;

@interface IESLiveItemSharePanelView : IESLiveCommentExpandDetailView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *errorImageView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UIScrollView *scrollViewContainer;
@property (retain, nonatomic) UILabel *guideLabel;
@property (nonatomic) BOOL didHideGuideTip;
@property (retain, nonatomic) ItemShareListResponse_ResponseData *shareData;
@property (retain, nonatomic) NSMutableArray *viewModels;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ shareItemClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noData;
- (void)refreshWithItemShareData:(id)a0;
- (void)hideGuideTipWithAnimation;
- (void)trackItemSharePanelShow;
- (void)showItemShareList;
- (void)operateItem:(id)a0;
- (void)didDisplayOnceWithViewModel:(id)a0;
- (void)trackMicroAppClickWithItemInfo:(id)a0;
- (void)trackItemShareGetWithItemInfo:(id)a0;
- (void)trackMicroAppShowWithItemInfo:(id)a0;
- (void)preloadMicroAppItemViewModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupView;
- (void)showError;

@end
