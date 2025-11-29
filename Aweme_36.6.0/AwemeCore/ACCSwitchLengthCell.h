@class UILabel, NSString;

@interface ACCSwitchLengthCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long modeId;
@property (nonatomic) long long realModeIndex;

+ (double)cellWidth;
+ (double)cellHeight;

- (void)updateTextLabelShadow;
- (BOOL)isTextLableTextEmpty;
- (void)updateCellProgress:(double)a0 cinemaProgress:(double)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
