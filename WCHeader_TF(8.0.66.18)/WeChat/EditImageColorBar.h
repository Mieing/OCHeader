@class NSArray, EditImageColor, NSMutableArray;
@protocol EditImageColorBarDeleagate;

@interface EditImageColorBar : MMUIView {
    unsigned long long m_selectedIndex;
    NSMutableArray *m_colorDotViews;
}

@property (weak, nonatomic) id<EditImageColorBarDeleagate> delegate;
@property (retain, nonatomic) NSArray *colorArray;
@property (retain, nonatomic) EditImageColor *selectedColor;
@property (nonatomic) double selectedSizeLen;
@property (nonatomic) double unselectedSizeLen;

- (double)preferWidthWithUnselectedPadding:(double)a0;
- (void)layoutSubviews;
- (void)onDotViewClick:(id)a0;
- (void).cxx_destruct;

@end
