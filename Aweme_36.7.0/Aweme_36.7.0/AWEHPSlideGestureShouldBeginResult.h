@class NSString, NSDictionary, UIGestureRecognizer;

@interface AWEHPSlideGestureShouldBeginResult : NSObject

@property (copy, nonatomic) NSString *scene;
@property (weak, nonatomic) UIGestureRecognizer *gesture;
@property (nonatomic) BOOL shouldBegin;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
