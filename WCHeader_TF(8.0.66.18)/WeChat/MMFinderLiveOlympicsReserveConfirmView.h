@class UIButton, MMUILabel, UIView;

@interface MMFinderLiveOlympicsReserveConfirmView : MMUIView

@property (retain, nonatomic) UIView *dialogView;
@property (retain, nonatomic) MMUILabel *title;
@property (retain, nonatomic) MMUILabel *subTitle;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *reserveButton;
@property (retain, nonatomic) UIView *vertLine;
@property (retain, nonatomic) UIView *horiLine;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutUI;
- (void)showWithContact:(id)a0 liveNoticeInfo:(id)a1 actionBlock:(id /* block */)a2;
- (void)onCloseButtonClick:(id)a0;
- (void)onReserveButtonClick:(id)a0;
- (void).cxx_destruct;

@end
