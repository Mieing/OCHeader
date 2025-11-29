@class NSArray;

@interface IESLiveInteractionLayoutStreamAttributes : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainSlotStreamLayout;
@property (copy, nonatomic) NSArray *guestStreamLayoutFrames;
@property (copy, nonatomic) NSArray *allStreamLayoutFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentStreamLayout;

- (void).cxx_destruct;

@end
