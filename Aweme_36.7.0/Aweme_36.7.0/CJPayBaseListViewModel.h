@class CJPayCommonListViewController, UIColor, CJPayBaseListCellView;

@interface CJPayBaseListViewModel : NSObject

@property (weak, nonatomic) CJPayCommonListViewController *viewController;
@property (retain, nonatomic) Class viewClass;
@property (weak, nonatomic) CJPayBaseListCellView *cell;
@property (nonatomic) double viewHeight;
@property (nonatomic) double topMarginHeight;
@property (nonatomic) double bottomMarginHeight;
@property (retain, nonatomic) UIColor *topMarginColor;
@property (retain, nonatomic) UIColor *bottomMarginColor;
@property (retain, nonatomic) UIColor *containerBGColor;
@property (retain, nonatomic) UIColor *highLightBGColor;
@property (nonatomic) long long payMethodScene;
@property (nonatomic) long long scene;
@property (nonatomic) double topCornerRadius;
@property (nonatomic) double bottomCornerRadius;

- (double)getViewHeight;
- (Class)getViewClass;
- (double)getTopMarginHeight;
- (double)getBottomMarginHeight;
- (id)getContainerBGColor;
- (id)getTopMarginColor;
- (id)getBottomMarginColor;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (id)cellReuseIdentifier;

@end
