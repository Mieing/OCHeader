@class UIButton, UILabel;
@protocol WAProfileSectionHeaderViewDelegate;

@interface WAProfileSectionHeaderView : UITableViewHeaderFooterView {
    unsigned int _type;
    UIButton *_contentButton;
    UILabel *_titleLabel;
}

@property (weak, nonatomic) id<WAProfileSectionHeaderViewDelegate> delegate;

+ (double)headerHeight;

- (id)initWithReuseIdentifier:(id)a0;
- (void)setupSubviews;
- (void)updateTitle:(id)a0 type:(unsigned int)a1;
- (void)layoutSubviews;
- (void)layoutSubviewsImmediately;
- (void).cxx_destruct;

@end
