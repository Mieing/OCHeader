@class NSArray, DUXRadioboxGroup, UIStackView;

@interface AWEProfileEditChoiceView : UIView

@property (retain, nonatomic) UIStackView *contentView;
@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) DUXRadioboxGroup *boxGroup;

- (void)p_chooseMode:(BOOL)a0;
- (id)initWithInitialIndex:(unsigned long long)a0 dataArray:(id)a1 selectBlock:(id /* block */)a2;
- (void)enableChoose;
- (void)disableChoose;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupView;

@end
