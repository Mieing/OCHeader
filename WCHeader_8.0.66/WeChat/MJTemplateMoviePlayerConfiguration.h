@interface MJTemplateMoviePlayerConfiguration : NSObject

@property (readonly, nonatomic) BOOL shouldStopPlayOnAppWillResignActive;
@property (readonly, nonatomic) BOOL shouldStartPlayOnAppWillBecomeActive;

- (id)initWithShouldStopPlayOnAppWillResignActive:(BOOL)a0 shouldStartPlayOnAppWillBecomeActive:(BOOL)a1;

@end
