@class UIView;
@protocol DitoMultiTabStripViewProtocol;

@interface DitoMultiTabStripCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView<DitoMultiTabStripViewProtocol> *bizContentView;
@property (retain, nonatomic) UIView *indexLineView;

- (void)configWithContent:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
