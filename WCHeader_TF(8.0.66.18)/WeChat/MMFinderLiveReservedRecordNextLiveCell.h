@class NSString, FinderLiveReservedNoticeRecord, MMFinderLiveReservedRecordView, UIView;
@protocol MMFinderLiveReservedRecordNextLiveCellDelegate;

@interface MMFinderLiveReservedRecordNextLiveCell : UITableViewCell <WCFinderLiveNoticeViewDelegate, MMFinderLiveReservedRecordViewDelegate, WCFinderLiveExt>

@property (class, readonly, copy, nonatomic) NSString *defaultCellIdentifier;

@property (retain, nonatomic) MMFinderLiveReservedRecordView *noticeView;
@property (retain, nonatomic) UIView *bottomLine;
@property (weak, nonatomic) id<MMFinderLiveReservedRecordNextLiveCellDelegate> delegate;
@property (retain, nonatomic) FinderLiveReservedNoticeRecord *reservedNoticeRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForReservedNextLiveRecord:(id)a0 inTableView:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)loadNoticeView;
- (void)updateAllValues;
- (void)layoutSubviews;
- (void)onLiveNoticeViewNextLiveNoticesButtonClicked:(id)a0;
- (void)onReservedRecordViewAnchorInfoTapped:(id)a0;
- (void)onNextLiveNoticeChanged:(id)a0;
- (void).cxx_destruct;

@end
