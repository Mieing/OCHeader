@class UIView, MMFinderLiveNoticeModReminderSubView, FinderLiveNoticeInfo;
@protocol LiveNoticeModReminderViewDelegate;

@interface MMFinderLiveNoticeModReminderView : MMPageSheetBaseView

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (nonatomic) int selectType;
@property (nonatomic) unsigned long long fromType;
@property (nonatomic) unsigned long long selectMode;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMFinderLiveNoticeModReminderSubView *autoReminderSubView;
@property (retain, nonatomic) MMFinderLiveNoticeModReminderSubView *manualReminderSubView;
@property (weak, nonatomic) id<LiveNoticeModReminderViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateLiveNoticeInfo:(id)a0 selectType:(int)a1 fromType:(unsigned long long)a2 selectMode:(unsigned long long)a3;
- (BOOL)isDisableWithType:(int)a0;
- (BOOL)isMemberLiveNotice:(id)a0;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (BOOL)isFromStarterVC;
- (BOOL)isFromNoticeDetail;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton:(BOOL)a0;
- (id)getCurrentRightButton;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)handleRemanderSubViewSelectWithSelectType:(int)a0 isDisable:(BOOL)a1;
- (void).cxx_destruct;

@end
