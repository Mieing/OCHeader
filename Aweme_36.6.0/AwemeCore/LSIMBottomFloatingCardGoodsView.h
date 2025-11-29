@class UIStackView;

@interface LSIMBottomFloatingCardGoodsView : LSIMBottomFloatingCardBaseView

@property (retain, nonatomic) UIStackView *tagStackView;

- (id)jumpURL;
- (id)cardTypeString;
- (id)subtitleConfig;
- (id)sendParams;
- (void)updateCardNetDict:(id)a0;
- (id)sendButtonString;
- (id)sendBizExt;
- (void)handleCardNetDict;
- (BOOL)addActualAmountIfNeeded:(id)a0;
- (BOOL)addOriginAmountIfNeeded:(id)a0;
- (BOOL)addDiscountDescIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)imageURL;
- (id)itemID;
- (void)setupView;
- (id)titleString;

@end
