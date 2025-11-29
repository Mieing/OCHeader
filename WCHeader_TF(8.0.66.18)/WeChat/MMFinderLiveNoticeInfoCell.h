@class NSString, UIView, MMFinderLiveNoticeInfoViewItem, WCFinderLiveNoticeView;
@protocol MMFinderLiveNoticeInfoCellDelegate;

@interface MMFinderLiveNoticeInfoCell : UITableViewCell <MMFinderLiveNoticeInfoViewItemDelegate, WCFinderLiveNoticeViewDelegate>

@property (class, readonly, copy, nonatomic) NSString *defaultCellIdentifier;

@property (retain, nonatomic) WCFinderLiveNoticeView *noticeView;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) id<MMFinderLiveNoticeInfoCellDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveNoticeInfoViewItem *viewItem;
@property (nonatomic) BOOL displayTopLine;
@property (nonatomic) long long indexInList;
@property (nonatomic) long long totalNoticeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForViewItem:(id)a0 inTableView:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadNoticeView;
- (void)updateAllValues;
- (void)layoutSubviews;
- (void)noticeInfoViewItemDidUpdate:(id)a0;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)a0;
- (void)onLiveNoticeViewActionButtonClicked:(id)a0;
- (void)onLiveNoticeViewTopNoticeButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
