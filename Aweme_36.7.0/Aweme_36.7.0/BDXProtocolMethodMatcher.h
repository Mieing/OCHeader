@class NSMutableSet;

@interface BDXProtocolMethodMatcher : NSObject

@property (retain, nonatomic) NSMutableSet *methods;

- (BOOL)containMethod:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;

@end
