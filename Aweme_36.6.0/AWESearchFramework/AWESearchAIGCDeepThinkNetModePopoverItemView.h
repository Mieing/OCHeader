@class UIImageView, UILabel;

@interface AWESearchAIGCDeepThinkNetModePopoverItemView : UIView

@property (readonly, nonatomic) struct CGSize { double width; double height; } minSize;
@property (retain, nonatomic) UIImageView *selectIcon;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subtitle;

- (id)initWithModeInfo:(id)a0 currentType:(long long)a1 selectCallback:(id /* block */)a2 styleConfig:(id)a3;
- (void).cxx_destruct;

@end
