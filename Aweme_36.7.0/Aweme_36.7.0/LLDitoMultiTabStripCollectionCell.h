@class UIView;
@protocol LLDitoMultiTabStripViewProtocol;

@interface LLDitoMultiTabStripCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView<LLDitoMultiTabStripViewProtocol> *bizContentView;
@property (retain, nonatomic) UIView *indexLineView;

- (void)configWithContent:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
