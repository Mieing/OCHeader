@class UIColor, NSString;

@interface AFDBubbleSharpArrow : NSObject <AFDBubbleArrow>

@property (nonatomic) double sharpHeight;
@property (nonatomic) double sharpWidth;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint1;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint2;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint3;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint4;
@property (retain, nonatomic) UIColor *bubbleColor;
@property (nonatomic) unsigned long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bubbleArrow_view;
- (void).cxx_destruct;
- (id)init;

@end
