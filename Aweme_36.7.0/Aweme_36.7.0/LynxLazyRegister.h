@interface LynxLazyRegister : NSObject

+ (void)loadLynxInitTask;
+ (void)initialize;
+ (void)loadImage;
+ (id)sharedInstance;

- (void)startTasksForKey:(id)a0;
- (id)init;

@end
