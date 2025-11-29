@class MMUIActivityIndicatorView, UIImageView, EmoticonBoardCrossCollectionEmoticonFooterModel, UILabel;
@protocol EmoticonBoardCrossCollectionEmoticonFooterViewDelegate;

@interface EmoticonBoardCrossCollectionEmoticonFooterView : UICollectionReusableView

@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) UIImageView *errorImageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionEmoticonFooterViewDelegate> delegate;
@property (retain, nonatomic) EmoticonBoardCrossCollectionEmoticonFooterModel *viewModel;
@property (copy, nonatomic) id /* block */ onTapReload;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)addTapGesture;
- (void)handleTap;
- (void).cxx_destruct;

@end
