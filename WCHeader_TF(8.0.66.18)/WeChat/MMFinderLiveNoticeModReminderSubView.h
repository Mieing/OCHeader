@class UIImageView, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveNoticeModReminderSubView : MMUIView

@property (retain, nonatomic) MMUIButton *bgButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) UIImageView *selectStateImg;
@property (retain, nonatomic) UIView *sepLine;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (nonatomic) BOOL isDisable;
@property (nonatomic) int type;
@property (nonatomic) int selectType;
@property (nonatomic) unsigned long long fromType;

- (void)updateType:(int)a0 selectType:(int)a1 isDisable:(BOOL)a2 fromType:(unsigned long long)a3;
- (BOOL)isSelect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)actionClick;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
