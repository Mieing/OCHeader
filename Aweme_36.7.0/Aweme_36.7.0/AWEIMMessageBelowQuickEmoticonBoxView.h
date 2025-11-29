@class NSArray;

@interface AWEIMMessageBelowQuickEmoticonBoxView : UIStackView

@property (retain, nonatomic) NSArray *emoticonViewArray;
@property (copy, nonatomic) id /* block */ didSelectedEmoticonBlock;

- (void)p_didPressedEmoticonViewWithGesture:(id)a0;
- (void)renderBoxViewWithModels:(id)a0;
- (void)updateBGColorWithHasBackgroundImage:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
