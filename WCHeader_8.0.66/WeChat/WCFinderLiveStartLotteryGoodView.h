@class UIView, WCFinderLiveStartLotteryGoodAddView, MMUITextField, WCFinderLiveStartLotteryProductInfo, NSString, UIImageView, MMUIView, MMUILabel, MMUIButton;
@protocol WCFinderLiveStartLotteryGoodViewDelegate;

@interface WCFinderLiveStartLotteryGoodView : MMUIView <UITextFieldDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *separaLine;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) MMUILabel *goodsTitleLabel;
@property (retain, nonatomic) MMUILabel *goodsDetailLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMUITextField *textField;
@property (nonatomic) unsigned int maxInputWordCount;
@property (nonatomic) BOOL needFilterWhiteSpace;
@property (retain, nonatomic) MMUIView *changeView;
@property (retain, nonatomic) WCFinderLiveStartLotteryGoodAddView *addView;
@property (nonatomic) BOOL isOnlyShopProduct;
@property (nonatomic) int lotteryType;
@property (weak, nonatomic) id<WCFinderLiveStartLotteryGoodViewDelegate> delegate;
@property (retain, nonatomic) WCFinderLiveStartLotteryProductInfo *productInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLiveStartLotteryGoodView:(id)a0;
- (void)layoutSubviews;
- (void)actionButtonClick;
- (void)onTextFieldChanged:(id)a0;
- (id)getLotteryDescriptionInputItemViewText;
- (void)cleanDescriptionInputItemViewText;
- (void)chooseWithType:(int)a0 isOnlyShopProduct:(BOOL)a1;
- (void)updateAddView;
- (void)createUI;
- (void)layoutUI;
- (void)addViewClick:(id)a0;
- (void).cxx_destruct;

@end
