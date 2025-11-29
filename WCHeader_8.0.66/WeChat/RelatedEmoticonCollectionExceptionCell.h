@class UILabel, NSString, MMUIActivityIndicatorView;

@interface RelatedEmoticonCollectionExceptionCell : UICollectionViewCell

@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UILabel *wordingLabel;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic, getter=isLoading) BOOL loading;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshView;
- (void).cxx_destruct;

@end
