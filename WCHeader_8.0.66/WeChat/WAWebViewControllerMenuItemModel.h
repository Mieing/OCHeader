@class UIColor, NSString, NSDictionary, UIImage;

@interface WAWebViewControllerMenuItemModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL disabled;
@property (nonatomic) double alpha;
@property (nonatomic) unsigned long long menuItemType;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long redDotType;
@property (retain, nonatomic) UIColor *highlightMaskColor;

- (id)init;
- (id)toMMScrollActionSheetItem;
- (void).cxx_destruct;

@end
