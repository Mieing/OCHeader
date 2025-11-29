@class UIButton, AWEECOMIMNoticeModel, UIImageView, UIView, YYLabel;

@interface AWEECOMIMNoticeItemView : UIView

@property (retain, nonatomic) YYLabel *attTileLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) unsigned long long hotspotType;
@property (retain, nonatomic) AWEECOMIMNoticeModel *noticeModel;
@property (copy, nonatomic) id /* block */ clickCloseBlock;

+ (BOOL)useNewStyle;
+ (id)backgroundColorMapper;
+ (double)rightButtonMaxWidth;
+ (id)detailNoticeConfig;
+ (BOOL)shouldShowOpenNotificationTipWithAnnouncementModel:(id)a0;
+ (void)handleDidShowOpenNotificationTipWithAnnouncementModel:(id)a0;
+ (void)saveCloseOpenPushTipTimeWithAnnouncementModel:(id)a0;
+ (BOOL)shouldShowOpenNotificationTipV2;
+ (void)handleDidShowOpenNotificationTipV2;
+ (void)saveCloseOpenPushTipTimeV2;
+ (id)getDetailNoticeMark;
+ (void)saveDetailNoticeMark:(id)a0;
+ (id)defaultDetailNoticeMark;

- (void)closeButtonClick:(id)a0;
- (void)bindNoticeModel:(id)a0;
- (double)noticeViewHeight;
- (struct CGSize { double x0; double x1; })rightButtonSizeWithButtonText:(id)a0;
- (void)modifiedByType:(long long)a0;
- (void)updateRightButtonHotspot;
- (void)_reLayoutSubViews;
- (struct CGSize { double x0; double x1; })noticeTitleSize;
- (void)decoratedByType:(long long)a0;
- (void)rightButtonClick:(id)a0;
- (double)noticeSubTitleHeight;
- (void)dismissNoticeViewWithShouldExecuteBlock:(BOOL)a0;
- (id)closeIconString;
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
