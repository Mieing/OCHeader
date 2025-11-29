@class NSString;

@interface AWEPlayInteractionSubInfo : NSObject

@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrame;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } realFrame;

- (void).cxx_destruct;

@end
