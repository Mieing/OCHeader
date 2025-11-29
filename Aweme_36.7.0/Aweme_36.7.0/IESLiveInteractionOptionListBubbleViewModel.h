@class UIColor, UIFont, NSArray, UIImage;

@interface IESLiveInteractionOptionListBubbleViewModel : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIFont *optionFont;
@property (retain, nonatomic) UIColor *optionTextColor;
@property (nonatomic) struct CGSize { double width; double height; } optionCellSize;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) double separatorHeight;
@property (retain, nonatomic) UIImage *selectedIndicatorImage;
@property (nonatomic) struct CGSize { double width; double height; } selectedIndicatorImageSize;
@property (readonly, copy, nonatomic) NSArray *options;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;

@end
