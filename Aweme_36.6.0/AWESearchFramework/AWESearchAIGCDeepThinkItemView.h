@class UIImageView, UILabel, AWESearchAIGCDeepThinkViewStyleConfig;

@interface AWESearchAIGCDeepThinkItemView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchAIGCDeepThinkViewStyleConfig *styleConfig;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewSize;

- (BOOL)isKeyBoardNewStyle;
- (id)initWithType:(unsigned long long)a0 styleConfig:(id)a1;
- (void)updateWithIsSelected:(BOOL)a0 title:(id)a1 icon:(id)a2;
- (void).cxx_destruct;
- (void)createUI;

@end
