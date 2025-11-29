@class UILabel, UIView;
@protocol IESLiveLanguageService;

@interface IESLiveSlideLabelAnimator : NSObject

@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL disableFilterName;

- (void)showFilterName:(id)a0 slidePosition:(BOOL)a1 force:(BOOL)a2;
- (double)titleLabelPositionY;
- (void).cxx_destruct;

@end
