@class UILabel, NSMutableArray, UIImageView;

@interface CJPaySuggestAddCardView : UIView

@property (retain, nonatomic) NSMutableArray *suggestViewArray;
@property (retain, nonatomic) NSMutableArray *cardItemViewArray;
@property (retain, nonatomic) UILabel *moreBankTipsLabel;
@property (retain, nonatomic) UIImageView *rightArrowImage;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ didClickedMoreBankBlock;
@property (copy, nonatomic) id /* block */ didSelectedNewSuggestBankBlock;

- (void)p_setupUI:(id)a0;
- (void)p_addTapGesture;
- (void)p_tapClick:(id)a0;
- (void)p_newCardItemtapClick:(id)a0;
- (void)p_tapMoreBankClick;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(unsigned long long)a0;
- (void)dealloc;
- (void)updateContent:(id)a0;

@end
