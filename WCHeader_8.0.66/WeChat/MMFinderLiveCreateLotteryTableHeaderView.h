@class MMLiveShopShelfDragBar, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveCreateLotteryTableHeaderView : UIView

@property (nonatomic) BOOL noneData;
@property (retain, nonatomic) UIView *headerBgView;
@property (retain, nonatomic) MMLiveShopShelfDragBar *dragBar;
@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) MMUILabel *leftLabel;
@property (copy, nonatomic) id /* block */ addCreateLotteryBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateNoneData:(BOOL)a0;
- (void)getHeaderView;
- (void)layoutSubviews;
- (void)createLotteryClick;
- (void)layoutUI;
- (void).cxx_destruct;

@end
