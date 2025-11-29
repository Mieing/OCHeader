@class NSString;

@interface MMWebCanvasPopupParamas : NSObject

@property (copy, nonatomic) NSString *canvasId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } canvasRect;
@property (copy, nonatomic) NSString *maskHexColor;
@property (nonatomic) unsigned int mode;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) NSString *bizType;

- (id)description;
- (void).cxx_destruct;

@end
