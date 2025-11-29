@class AWELunaUgBlockerView, NSString, UIImageView, UILabel, UITableView;

@interface AWELunaUgSearchPopView : AWELunaUgVipPopView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tabview;
@property (retain, nonatomic) UIImageView *hotImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) AWELunaUgBlockerView *blockerView;
@property (retain, nonatomic) UIImageView *songsEmptyImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_didClickMainButton;
- (double)p_getSongsTableViewHeight;
- (double)p_getMaxTableViewHeight;
- (void)p_gotoLunaByClickArrow;
- (void)p_didClickHeader;
- (void)p_didClickListSongInfo:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setup;
- (unsigned long long)p_cellCount;

@end
