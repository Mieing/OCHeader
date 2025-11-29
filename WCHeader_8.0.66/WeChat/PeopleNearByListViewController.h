@class UILabel, NSString, NSArray, LbsContactInfoList, NSMutableDictionary, MMLbsAdvertismentInfo, NSMutableArray, MMTableView, SeePeopleNearByLogicController;
@protocol PeopleNearByListViewControllerDelegate;

@interface PeopleNearByListViewController : UIView <PeopleNearByAdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource> {
    id<PeopleNearByListViewControllerDelegate> m_delegate;
    unsigned long long m_abtestResult;
}

@property (retain, nonatomic) NSMutableArray *tableModels;
@property (retain, nonatomic) UILabel *sexTipsLabel;
@property (retain, nonatomic) MMLbsAdvertismentInfo *adInfo;
@property (retain, nonatomic) LbsContactInfoList *lbsContactList;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) SeePeopleNearByLogicController *logicController;
@property (retain, nonatomic) NSMutableDictionary *userHeaderImageCache;
@property (nonatomic) long long iRoomMemberCount;
@property (retain, nonatomic) NSArray *lbsPoiList;
@property (nonatomic) long long maxIndexOfUsersExposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (id)init;
- (id)getCachedHeaderImageForUsername:(id)a0 headImgUrl:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)genLBSPoiCell:(id)a0 poiItem:(id)a1;
- (id)genLBSPeopleCell:(id)a0 contactInfo:(id)a1;
- (id)genAdInfoCell:(id)a0 adInfo:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)reloadWithLbsContactInfoList:(id)a0;
- (void)reloadWithLbsPoiList:(id)a0;
- (void)reloadWithAdInfo:(id)a0;
- (void)reloadTableModels;
- (void)updateSexTipsAtTop;
- (void)adjustSubviewRects;
- (void)viewDidLayoutSubviews;
- (void)didSelectCloseAtCell:(id)a0;
- (void).cxx_destruct;

@end
