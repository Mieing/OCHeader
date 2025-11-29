@class NSArray, UIView;

@interface WCHeaderActionSheet : WCActionSheet

@property (retain, nonatomic) NSArray *headerArr;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *customViewModels;

- (id)initByHeader:(id)a0;
- (void)setAllButtonTitle:(id)a0;
- (void)setAllButtonCustomViewModels:(id)a0;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getFixedHeaderViewInWidth:(double)a0;
- (void)onCloseMenu:(id)a0;
- (void)tapActionSheetCustomView:(id)a0;
- (void).cxx_destruct;

@end
