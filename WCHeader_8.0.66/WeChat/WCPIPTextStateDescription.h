@class NSString, UIFont;

@interface WCPIPTextStateDescription : NSObject

@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFrame;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) BOOL disbleDisplayIcon;
@property (retain, nonatomic) UIFont *customTextFont;

+ (id)createLiveStateDescription:(id)a0;

- (id)initWithText:(id)a0 icon:(id)a1;
- (id)initWithText:(id)a0 icon:(id)a1 normalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerSize:(struct CGSize { double x0; double x1; })a3;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
