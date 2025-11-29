@class NSString, WCFinderLiveNoticeView, MMFinderLiveNoticeNextLiveNoticeViewItem;
@protocol MMFinderLiveNoticeNextLiveCellDelegate;

@interface MMFinderLiveNoticeNextLiveCell : UITableViewCell <MMFinderLiveNoticeNextLiveNoticeViewItemDelegate, WCFinderLiveNoticeViewDelegate>

@property (class, readonly, copy, nonatomic) NSString *defaultCellIdentifier;

@property (retain, nonatomic) WCFinderLiveNoticeView *noticeView;
@property (weak, nonatomic) id<MMFinderLiveNoticeNextLiveCellDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveNoticeNextLiveNoticeViewItem *viewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForViewItem:(id)a0 inTableView:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)loadNoticeView;
- (void)updateAllValues;
- (void)onLiveNoticeViewNextLiveNoticesButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
