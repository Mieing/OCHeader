@class UILabel, NSString, IESECLLView, UIImageView, IESECAlertView, IESECButton, UIView;
@protocol IESECGoodsFeedCollectionHeaderViewDelegate;

@interface IESECGoodsFeedCollectionHeaderView : UICollectionReusableView {
    IESECLLView *_contentView;
    IESECAlertView *_alertView;
    UIView *_listStyleChangeButton;
    UIImageView *_listStyleChangeButtonImageView;
    UILabel *_listStyleChangeButtonTitleLabel;
}

@property (retain, nonatomic) IESECButton *informationButton;
@property (weak, nonatomic) id<IESECGoodsFeedCollectionHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL showStyleChangeButton;

- (id /* block */)contentViewBuilder;
- (void)styleChangeButtonDidClick:(id)a0;
- (void)showInformationAlert:(id)a0;
- (void)updateStyleButtonWithStyle:(unsigned long long)a0;
- (void)showStyleChangeGuidingBubble;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)alertView;
- (void)setupSubviews;

@end
