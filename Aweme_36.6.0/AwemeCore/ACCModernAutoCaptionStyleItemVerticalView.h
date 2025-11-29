@class UILabel, AWEStoryFontChooseView;

@interface ACCModernAutoCaptionStyleItemVerticalView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEStoryFontChooseView *fontChooseView;
@property (copy, nonatomic) id /* block */ didSelectedFontBlock;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
