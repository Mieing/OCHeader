@class NSString, UIView;

@interface IESCKInternalView : NSObject

@property (weak, nonatomic) UIView *rawView;
@property (copy, nonatomic) NSString *viewType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (id)initWithRawView:(id)a0;
- (void).cxx_destruct;

@end
