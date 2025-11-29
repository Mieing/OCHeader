@class NSArray;

@interface HMDUIFrozenGestureRecord : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (retain, nonatomic) NSArray *translations;

- (void).cxx_destruct;

@end
