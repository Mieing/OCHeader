@class NSNumber;

@interface AFDDotsIndicatorDotView : UIView

@property (nonatomic) long long index;
@property (nonatomic) unsigned long long colorStyle;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSNumber *dotMaxSize;
@property (retain, nonatomic) NSNumber *dotMidSize;
@property (retain, nonatomic) NSNumber *dotLongSelectedSizeWidth;
@property (nonatomic) BOOL highlightDots;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateUIColorWithHighLight:(long long)a0;
- (id)initWithColorStyle:(unsigned long long)a0 dotMaxSize:(id)a1 dotMidSize:(id)a2;
- (void)setDotSize:(long long)a0 isCurrentPage:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
