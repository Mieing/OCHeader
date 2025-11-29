@class UIScrollView, UIView, MMUIButton, MMUILabel;

@interface MMLiveStarterWeakNetTipView : MMPageSheetBaseView {
    MMUILabel *_firstTipNumLabel;
    MMUILabel *_firstTipTitleLabel;
    MMUILabel *_firstTipDetailLabel;
    MMUILabel *_secTipNumLabel;
    MMUILabel *_secTipTitleLabel;
    MMUILabel *_secTipDetailLabel;
    MMUILabel *_bottomTipTitleLabel;
    MMUILabel *_bottomTipDetailLabel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *otherTitleLabel;
@property (readonly, nonatomic) MMUILabel *firstTipNumLabel;
@property (readonly, nonatomic) MMUILabel *firstTipTitleLabel;
@property (readonly, nonatomic) MMUILabel *firstTipDetailLabel;
@property (readonly, nonatomic) MMUILabel *secTipNumLabel;
@property (readonly, nonatomic) MMUILabel *secTipTitleLabel;
@property (readonly, nonatomic) MMUILabel *secTipDetailLabel;
@property (readonly, nonatomic) MMUILabel *bottomTipTitleLabel;
@property (readonly, nonatomic) MMUILabel *bottomTipDetailLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isShowing;

+ (BOOL)isCurrentNetNormal;
+ (BOOL)needTestSpeed;
+ (BOOL)isOverShowInterval;

- (id)initWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void)layoutLiveWeakNet;
- (void)layoutLiveSilent;
- (void)layoutStaterLiveWeakNet;
- (void)layoutLiveBreakSound;
- (void)layoutLiveWeakNetUI;
- (void)layoutCommentUI;
- (double)caculateBottomDeatilHeightWithText:(id)a0 font:(id)a1;
- (double)contentViewHeight;
- (double)calcContentHeight;
- (void)actionButtonClick:(id)a0;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
