@class UIColor, NSArray, NSString, UIFont;
@protocol AWEShareFunction;

@interface AWESharePanelFunctionCellViewModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) NSArray *lightImageUrls;
@property (copy, nonatomic) NSArray *darkImageUrls;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) id<AWEShareFunction> function;
@property (nonatomic) unsigned long long iconStyle;
@property (readonly, copy, nonatomic) NSArray *imageUrls;
@property (retain, nonatomic) NSString *preferTheme;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;

- (id)extImage;
- (id)imageBackgroundColor;
- (BOOL)shouldDisableCurrentFunction;
- (id)initWitFunction:(id)a0 customTitle:(id)a1 lightImageUrls:(id)a2 darkImageUrls:(id)a3 iconStyle:(unsigned long long)a4;
- (void)didSelectCellWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)cellWillAppearWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (BOOL)isEnable;
- (void).cxx_destruct;
- (id)image;
- (id)smallImage;
- (id)shareType;

@end
