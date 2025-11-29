@class NSString, AWEMusicSingleTabTopTitleView, UIView;

@interface AWEMusicSingleTabTopView : UIView

@property (retain, nonatomic) AWEMusicSingleTabTopTitleView *titleArea;
@property (retain, nonatomic) UIView *seperateView;
@property (copy, nonatomic) NSString *tailText;

- (void)updateTextColor:(id)a0;
- (void)buildUI;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateTitle:(id)a0;

@end
