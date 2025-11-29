@class UIView, NSString, NSArray, CALayer, AWEGradientView, UIImageView, UITableView, AWELunaUgBlockerView, UILabel;

@interface AWELunaUgLyricsPopView : AWELunaUgPopView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIImageView *songCoverImageView;
@property (retain, nonatomic) UILabel *popViewTitleLabel;
@property (retain, nonatomic) UILabel *popViewSubTitleLabel;
@property (retain, nonatomic) CALayer *headerGradientLayer;
@property (retain, nonatomic) UITableView *tabview;
@property (retain, nonatomic) AWEGradientView *tabviewMask;
@property (retain, nonatomic) AWELunaUgBlockerView *blockerView;
@property (retain, nonatomic) NSArray *lyrics;
@property (nonatomic) int highlightIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_didClickCover;
- (void)p_gotoLunaByClickArrow;
- (void)p_didClickLyrics;
- (void)p_didClickHeader;
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

@end
