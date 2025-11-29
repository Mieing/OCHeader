@class UIButton, UIImageView, UILabel, NSMutableArray, MMWebImageView;
@protocol EmoticonBoardIPMergeTipViewDelegate;

@interface EmoticonBoardIPMergeTipView : MMUIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSMutableArray *iconViewArray;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) MMWebImageView *ipIconView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) id<EmoticonBoardIPMergeTipViewDelegate> delegate;
@property (nonatomic) double bottomInset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateOriginPackages:(id)a0 ipSetKey:(id)a1;
- (id)genConfirmButtonWithDarkMode;
- (id)genIconViewFromPageWrap:(id)a0;
- (id)genIconViewFromIPSetKey:(id)a0;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)onTapConfirm;
- (void).cxx_destruct;

@end
