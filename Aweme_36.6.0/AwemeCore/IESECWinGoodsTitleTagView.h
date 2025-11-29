@class UIFont, NSArray, UIColor, NSMutableArray;

@interface IESECWinGoodsTitleTagView : UIView

@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *imageURLList;
@property (copy, nonatomic) NSArray *imageTagsArray;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemsPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double tagsWidth;
@property (nonatomic) double tagHeight;
@property (retain, nonatomic) NSMutableArray *iamgeViews;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIFont *tagFont;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (retain, nonatomic) UIColor *tagBackgroundColor;
@property (retain, nonatomic) UIColor *tagBorderColor;
@property (nonatomic) double tagBorderWidth;
@property (nonatomic) double tagCornerRadius;
@property (nonatomic) double tagImagesFixHeight;
@property (nonatomic) BOOL tagMasksToBounds;

- (void)configItemsPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)configPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setTagImages:(id)a0 height:(double)a1;
- (void)configImageViewsCounts:(long long)a0;
- (void)layoutImageViews;
- (void)setTagImageURLList:(id)a0 height:(double)a1 imageLoadCompletion:(id /* block */)a2;
- (void)setTagTitleList:(id)a0 height:(double)a1;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
