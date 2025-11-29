@class UIColor, NSArray, UIImage, UIView;

@interface WCHeaderActionSheet : WCActionSheet

@property (retain, nonatomic) NSArray *headerArr;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *customViewModels;
@property (retain, nonatomic) UIColor *headerBackgroundColor;
@property (retain, nonatomic) UIImage *headerCloseImg;
@property (nonatomic) BOOL hideSeperator;

- (id)initByHeader:(id)a0;
- (id)initByHeader:(id)a0 headerBackgroundColor:(id)a1 headerCloseImg:(id)a2 hideSeperator:(BOOL)a3;
- (void)setAllButtonTitle:(id)a0;
- (void)setAllButtonCustomViewModels:(id)a0;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getFixedHeaderViewInWidth:(double)a0;
- (void)onCloseMenu:(id)a0;
- (void)tapActionSheetCustomView:(id)a0;
- (void).cxx_destruct;

@end
