@class AWEVideoPublishMusicSelectTopTabItemData, UILabel, UIView, UIButton;

@interface AWEVideoPublishMusicSelectTopTabItemView : UIView {
    double _titleLabelWidth;
}

@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIView *underLineView;
@property (retain, nonatomic) AWEVideoPublishMusicSelectTopTabItemData *itemData;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)p_setupAccessibility;
- (id)initWithItemData:(id)a0;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
