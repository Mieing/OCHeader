@class NSString, NSMutableArray, UIFont;

@interface BrandProfileMsgHeaderViewModel : BrandProfileMsgBaseViewModel

@property (retain, nonatomic) NSMutableArray *titleLabelStyles;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (readonly, nonatomic) unsigned long long headerType;
@property (readonly, nonatomic) NSString *titleStr;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) double titleTopPadding;
@property (readonly, nonatomic) double titleBottomPadding;

- (id)tableViewCellClassName;
- (double)calCellHeight;
- (void)onUnfold;
- (void).cxx_destruct;

@end
