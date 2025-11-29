@class NSArray, UIButton, UIScrollView;

@interface IESLiveFaceEffectAigcBackgroundKeywordPickView : UIView

@property (retain, nonatomic) NSArray *keywords;
@property (retain, nonatomic) NSArray *keywordBtns;
@property (retain, nonatomic) UIButton *selectedBtn;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) id /* block */ selectWordChangeBlock;

- (void)resetSelectStatus;
- (void)keywordClick:(id)a0;
- (id)selectedKeyword;
- (void)updateKeywords:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
