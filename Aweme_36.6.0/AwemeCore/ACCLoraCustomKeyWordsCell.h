@class UILabel, AWEAICreateEffectPaintingKeyWordsModel;

@interface ACCLoraCustomKeyWordsCell : AWEAIGCKeyWordsBaseCell

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) unsigned long long cellStatus;
@property (retain, nonatomic) AWEAICreateEffectPaintingKeyWordsModel *model;

+ (id)identifier;

- (void)configCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
