@class UIColor;

@interface AWELifeFeedsStyle : NSObject

@property (nonatomic) long long numberOfColumns;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double presetHeight;
@property (nonatomic) BOOL isBlock;

- (void)parseMargin:(id)a0;
- (id)initWithSourceData:(id)a0;
- (void)resetNumberOfColumns:(unsigned long long)a0;
- (void)parseBackgroundColor:(id)a0;
- (void).cxx_destruct;

@end
