@class NSArray, NSString, UIResponder;

@interface MMMenuVisionData : NSObject

@property (retain, nonatomic) NSArray *items;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } showFromRect;
@property (retain, nonatomic) NSString *sceneId;
@property (retain, nonatomic) UIResponder *responder;

- (void).cxx_destruct;

@end
