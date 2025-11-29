@class UIView, NSString, FinderLiveNoticeInfo, MMFinderLiveNoticeShowReminderBottomView, FinderLiveNextLiveNotificationInfo, MMUILabel, UILabel, WCFinderLiveNoticeView;

@interface MMFinderLiveNoticeShowReminderView : MMPageSheetBaseView

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (nonatomic) int selectType;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCFinderLiveNoticeView *liveNoticeView;
@property (nonatomic) double noticeViewHeight;
@property (retain, nonatomic) MMFinderLiveNoticeShowReminderBottomView *bottomView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) FinderLiveNextLiveNotificationInfo *nextLiveNoticeInfo;
@property (retain, nonatomic) WCFinderLiveNoticeView *nextLiveNoticeView;
@property (retain, nonatomic) UILabel *noticeHeader;
@property (retain, nonatomic) UILabel *nextLiveNoticeHeader;
@property (copy, nonatomic) id /* block */ selectBlock;

- (void)updateLiveNoticeInfo:(id)a0 nextLiveNoticeInfo:(id)a1 selectType:(int)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (BOOL)isMemberLiveNotice:(id)a0;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (double)contentViewHeight;
- (void)bottomViewClick;
- (void).cxx_destruct;

@end
