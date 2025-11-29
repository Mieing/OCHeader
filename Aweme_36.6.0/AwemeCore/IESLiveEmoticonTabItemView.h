@class UIImageView, UILabel, UIView, IESLiveCommentEmoticonPageItem;

@interface IESLiveEmoticonTabItemView : UIView

@property (retain, nonatomic) IESLiveCommentEmoticonPageItem *pageItem;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *pageIcon;
@property (retain, nonatomic) UIView *container;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageItem:(id)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)setupViews;

@end
