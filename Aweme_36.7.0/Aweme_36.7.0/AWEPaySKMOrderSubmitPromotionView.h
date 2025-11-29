@class UILabel;

@interface AWEPaySKMOrderSubmitPromotionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UILabel *promotionTag;
@property (nonatomic) BOOL isLoading;

- (void)updateWithPromotionInfo:(id)a0 isLoading:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
