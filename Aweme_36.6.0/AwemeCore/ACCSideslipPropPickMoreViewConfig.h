@class UIImage;

@interface ACCSideslipPropPickMoreViewConfig : NSObject

@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double topMargin;
@property (nonatomic) double iconBottomMargin;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL disableIconCornerRadius;

- (void).cxx_destruct;

@end
