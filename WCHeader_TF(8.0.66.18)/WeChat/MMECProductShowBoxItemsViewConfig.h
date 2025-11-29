@class NSArray, UIFont;

@interface MMECProductShowBoxItemsViewConfig : NSObject

@property (retain, nonatomic) NSArray *validShowBoxItemTypes;
@property (retain, nonatomic) NSArray *validShowBoxElementContextTypes;
@property (retain, nonatomic) NSArray *invalidShowBoxElementContextTypes;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingLabelPadding;
@property (nonatomic) struct CGSize { double width; double height; } borderImageLabelImageSize;
@property (nonatomic) double lineHeight;
@property (nonatomic) double lineSpacing;
@property (nonatomic) BOOL multiLines;

- (void).cxx_destruct;

@end
