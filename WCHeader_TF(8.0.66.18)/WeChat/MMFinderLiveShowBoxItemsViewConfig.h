@class NSArray, UIFont;

@interface MMFinderLiveShowBoxItemsViewConfig : NSObject

@property (retain, nonatomic) NSArray *validShowBoxItemTypes;
@property (retain, nonatomic) NSArray *invalidShowBoxItemTypes;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingLabelPadding;
@property (nonatomic) struct CGSize { double width; double height; } borderImageLabelImageSize;
@property (nonatomic) struct CGSize { double width; double height; } jumpArrowSize;
@property (nonatomic) double bottomTouchInset;

- (void).cxx_destruct;

@end
