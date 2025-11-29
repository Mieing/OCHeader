@class NSMutableSet;

@interface WCFinderActionSet : NSObject

@property (retain, nonatomic) NSMutableSet *actions;

- (void)add:(id)a0 action:(SEL)a1;
- (void)remove:(id)a0 action:(SEL)a1;
- (void)invoke;
- (void)invoke:(id)a0;
- (void)invoke:(id)a0 arg2:(id)a1;
- (void).cxx_destruct;

@end
