@class UILabel, UIView, WCLiveBlurButton, UIButton;

@interface MMFinderLiveBoxPageSheetView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCLiveBlurButton *closeButton;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *detail;
@property (nonatomic) double titleCenter;
@property (nonatomic) double detailTop;
@property (nonatomic) double buttonTop;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ didDismiss;

- (id)initWithTitleCenter:(double)a0 detailTop:(double)a1 buttonTop:(double)a2 contentHeight:(double)a3;
- (void)setupPageSheetConfig;
- (void)initSubView;
- (void)onCloseButtonClicked;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)onButtonClicked;
- (void).cxx_destruct;

@end
