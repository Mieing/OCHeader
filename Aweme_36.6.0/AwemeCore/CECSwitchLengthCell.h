@class UILabel, NSString;

@interface CECSwitchLengthCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long modeId;
@property (nonatomic) unsigned long long cellStyle;

- (void)releaseFocus;
- (void)focusByProgress:(double)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)focus;

@end
