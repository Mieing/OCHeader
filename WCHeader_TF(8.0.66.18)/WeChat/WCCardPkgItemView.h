@class UIButton, WCCardData, UIView;
@protocol WCCardPkgItemViewDelegate;

@interface WCCardPkgItemView : MMUIView {
    UIButton *_selectBtn;
    WCCardData *_cardData;
    BOOL _bIsLongPressHandled;
    UIView *_cardBgView;
    UIView *_coverView;
}

@property (weak, nonatomic) id<WCCardPkgItemViewDelegate> delegate;
@property (nonatomic) BOOL needSelect;
@property (nonatomic) BOOL bSelected;
@property (nonatomic) long long indexForBatchAdd;

+ (double)CardItemViewHeight;
+ (double)CardItemViewTopHeight;

- (id)initWithCardData:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)getCardBgView:(unsigned int)a0 bgColor:(id)a1;
- (id)getLogoView:(id)a0;
- (void)onSelectChanged;
- (void)setSelectBtnState;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
