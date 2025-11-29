@class UIColor, NSDictionary;

@interface IESSoloKTVMidiViewConfig : NSObject

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *fgColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) double midiViewHeight;
@property (nonatomic) double scoreViewHeight;
@property (nonatomic) double viewHeight;
@property (nonatomic) double rowHeight;
@property (nonatomic) double focusHeight;
@property (nonatomic) double corner;
@property (nonatomic) double secondWidth;
@property (nonatomic) double topBottomMargin;
@property (nonatomic) double startMargin;
@property (nonatomic) double scoreTextSize;
@property (nonatomic) double pitchABS;
@property (nonatomic) struct CGSize { double width; double height; } arrowSize;
@property (nonatomic) struct CGSize { double width; double height; } arrowTailSize;
@property (nonatomic) struct CGSize { double width; double height; } levelSize;
@property (nonatomic) struct CGSize { double width; double height; } scoreBottomSize;
@property (nonatomic) struct CGSize { double width; double height; } levelCountSize;
@property (retain, nonatomic) NSDictionary *scoreAttribute;
@property (retain, nonatomic) NSDictionary *scoreAttributePX;

+ (id)soloKTVMidiConfig;

- (void)calcTextAttr:(double)a0;
- (id)getStartColor;
- (id)getEndColor;
- (void).cxx_destruct;

@end
