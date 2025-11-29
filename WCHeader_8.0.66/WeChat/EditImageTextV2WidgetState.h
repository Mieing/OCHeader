@class NSString, UIColor;

@interface EditImageTextV2WidgetState : EditImageWidgetState

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editViewFrame;
@property (retain, nonatomic) NSString *textContent;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double textLineWidth;
@property (nonatomic) double textViewScale;
@property (nonatomic) unsigned long long textStyle;

+ (id)restoryFromFinderCoverWordInfo:(id)a0;
+ (id)styleDict;
+ (unsigned int)wordStyleWithTextStyle:(unsigned long long)a0;
+ (unsigned long long)textStyleWithWordStyle:(unsigned int)a0;
+ (id)kXpercentKey;
+ (id)kYpercentKey;

- (id)genFinderCoverInfo;
- (void)setXPercent:(double)a0;
- (double)XPercent;
- (void)setYPercent:(double)a0;
- (double)YPercent;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
