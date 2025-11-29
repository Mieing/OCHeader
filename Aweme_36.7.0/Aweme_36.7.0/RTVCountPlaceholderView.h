@class UILabel;

@interface RTVCountPlaceholderView : RTVBasePreviewView

@property (retain, nonatomic) UILabel *countLabel;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void).cxx_destruct;
- (void)updateWithCount:(long long)a0;

@end
