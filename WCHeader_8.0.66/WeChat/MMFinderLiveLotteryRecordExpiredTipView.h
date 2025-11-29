@class NSString, CAShapeLayer, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveLotteryRecordExpiredTipView : MMPageSheetBaseView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *detailText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDetailText:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)onCancel;
- (void).cxx_destruct;

@end
