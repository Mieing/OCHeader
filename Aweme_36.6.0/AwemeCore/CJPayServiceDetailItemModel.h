@class UIColor, UIFont, NSString, NSArray, CJPayMaskMessageShowItemModel;

@interface CJPayServiceDetailItemModel : NSObject

@property (nonatomic) long long showStyle;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSArray *attributeTextModels;
@property (nonatomic) long long numberOfLines;
@property (retain, nonatomic) CJPayMaskMessageShowItemModel *maskMessageItemModel;

- (void).cxx_destruct;

@end
