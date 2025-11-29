@class UIColor;

@interface AWEIMPanelViewModel : NSObject

@property (retain, nonatomic) Class associateViewClass;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double contentHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) double height;

- (void).cxx_destruct;
- (id)init;

@end
