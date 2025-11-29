@class YYLabel, AWESearchCorrectModel;

@interface AWESearchCorrectCachalotContentView : UIView

@property (retain, nonatomic) AWESearchCorrectModel *model;
@property (retain, nonatomic) YYLabel *keywordLabel;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) unsigned long long theme;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (double)heightForCorrectModel:(id)a0 width:(double)a1;
+ (id)p_generalWeakCorrectWithCorrectModel:(id)a0 theme:(unsigned long long)a1 tapBlock:(id /* block */)a2;
+ (id)p_generalStrongCorrectWithCorrectModel:(id)a0 theme:(unsigned long long)a1 tapBlock:(id /* block */)a2;
+ (id)p_generalKeywordLabel;

- (void)configureUI;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)updateWithCorrectModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)maxLabelWidth;

@end
