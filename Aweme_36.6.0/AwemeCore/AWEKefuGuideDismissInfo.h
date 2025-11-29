@class NSString;

@interface AWEKefuGuideDismissInfo : NSObject

@property (retain, nonatomic) NSString *reason;
@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { double x; double y; } touchPosition;

- (void).cxx_destruct;

@end
