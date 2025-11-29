@class NSString, AWEStoryFontModel, AWEStoryColor;

@interface AWECoverNLEEditorRevertTextRecordConfig : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) AWEStoryFontModel *font;
@property (retain, nonatomic) AWEStoryColor *color;
@property (nonatomic) long long aligment;
@property (nonatomic) unsigned long long style;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (void).cxx_destruct;

@end
