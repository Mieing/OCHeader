@class UIView;
@protocol MMMultiMenuAndMemuTableViewCellDelegate;

@interface MMMultiMenuAndMemuTableViewCell : MMMultiMenuTableViewCell {
    UIView *coverView;
    BOOL m_selected;
}

@property (retain, nonatomic) UIView *m_bkgCardView;
@property (weak, nonatomic) id<MMMultiMenuAndMemuTableViewCellDelegate> delegate;
@property (nonatomic) long long buttonTitleLabelNumberOfLines;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setCoverView:(BOOL)a0;
- (void)setMenuOptionsViewHidden:(BOOL)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)getArrMemuItemForRowAtIndexPath:(id)a0;
- (void)onMenuTransitionToConfirmState:(long long)a0;
- (void)deleteAction:(id)a0;
- (long long)getButtonTitleLabelNumberOfLines;
- (long long)getButtonTitleLabelTextAlignment;
- (void).cxx_destruct;

@end
