@class UIButton, AWEDeliveryNoticeModel, UIImageView, UIView, YYLabel;

@interface AWEDeliveryNoticeItemView : UIView

@property (retain, nonatomic) YYLabel *attTileLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) unsigned long long hotspotType;
@property (retain, nonatomic) AWEDeliveryNoticeModel *noticeModel;

+ (id)backgroundColorMapper;
+ (double)rightButtonMaxWidth;

- (void)closeButtonClick:(id)a0;
- (void)dismissNoticeViewWithShouldExcuteBlock:(BOOL)a0;
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
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
