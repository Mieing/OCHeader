@class UIColor, NSString, UILabel, NSMutableArray;

@interface QScaleUnitsView : UIView {
    NSMutableArray *_strings;
    UIColor *_lightColor;
    UIColor *_normalColor;
    UIColor *_strokeColor;
    float _fontSize;
    BOOL _withUnits;
}

@property (nonatomic) long long segmentNumber;
@property (retain, nonatomic) NSString *baseLegendString;
@property (retain, nonatomic) NSString *unitsString;
@property (nonatomic) BOOL useLightText;
@property (nonatomic) double segmentLengthInPixels;
@property (retain, nonatomic) UILabel *segmentLable;
@property (retain, nonatomic) NSString *fontName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initAttributes;
- (void)calculateLegend;
- (id)getFormattedString:(double)a0;
- (void)updateSegmentLable;
- (void).cxx_destruct;

@end
