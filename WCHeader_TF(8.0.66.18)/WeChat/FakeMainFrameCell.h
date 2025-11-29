@class FakeMainFrameItemView;

@interface FakeMainFrameCell : MMTableViewCell {
    FakeMainFrameItemView *m_itemView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateContentView:(id)a0 tableViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
