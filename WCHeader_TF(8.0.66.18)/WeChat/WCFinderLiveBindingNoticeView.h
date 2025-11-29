@class MMUIButton, CAShapeLayer, MMUIView, FinderLiveNoticeInfo, WCFinderLiveBindingNoticeMainView, MMUILabel;

@interface WCFinderLiveBindingNoticeView : MMPageSheetBaseView

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCFinderLiveBindingNoticeMainView *mainView;
@property (retain, nonatomic) MMUIButton *createButton;
@property (retain, nonatomic) MMUIButton *bindingButton;
@property (copy, nonatomic) id /* block */ createButtonBlock;
@property (copy, nonatomic) id /* block */ bindButtonBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateData:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (void)createButtonClick:(id)a0;
- (void)bindButtonClick:(id)a0;
- (void).cxx_destruct;

@end
