@class UIColor, NSAttributedString, UIFont;

@interface AWEDanmakuItemTextInfo : NSObject

@property (retain, nonatomic) NSAttributedString *danmakuText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } danmakuTextFrame;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIFont *danmakuFont;
@property (retain, nonatomic) UIColor *danmakuTextColor;

- (void).cxx_destruct;

@end
