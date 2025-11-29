@class NSString;

@interface AWEIMImageWaterFallUIConfig : NSObject

@property (nonatomic) BOOL hasMainImage;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (nonatomic) BOOL hasNotice;
@property (nonatomic) double panelHeight;
@property (nonatomic) double maxPanelHeight;
@property (copy, nonatomic) id /* block */ preferredContentHeightBlock;
@property (nonatomic) long long numberOfItemsInOneLine;
@property (nonatomic) BOOL disablePullDismiss;
@property (nonatomic) BOOL disablePullIndicatorView;
@property (nonatomic) BOOL hideButton;
@property (nonatomic) BOOL paddingButtonAreaWhenHidden;
@property (nonatomic) BOOL buttonDisabled;
@property (copy, nonatomic) NSString *closeImageName;

- (void)setupWithHasMainImage:(BOOL)a0 hasTitle:(BOOL)a1 hasSubTitle:(BOOL)a2 hasNotice:(BOOL)a3;
- (double)p_headerAreaHeight;
- (double)p_cellItemWidth;
- (double)p_bottomAreaHeight;
- (double)p_safeAreaPadding;
- (double)calculatedPanelHeight;
- (double)p_contentBottomInset;
- (double)p_commitViewHeight;
- (double)cellItemWidth;
- (double)calculatedContentHeight;
- (void).cxx_destruct;
- (double)contentBottomInset;

@end
