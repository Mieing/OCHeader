@interface LynxTextAttachmentInfo : NSObject

@property (readonly, nonatomic) long long sign;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL nativeAttachment;

- (id)initWithSign:(long long)a0 andFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
