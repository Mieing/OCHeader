@interface TBDistributerParameter : NSObject

@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL byGestured;

- (void)updateAnimated:(BOOL)a0 byGestured:(BOOL)a1;
- (void)reset;
- (id)init;

@end
