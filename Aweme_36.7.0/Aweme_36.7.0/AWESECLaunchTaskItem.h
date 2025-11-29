@class NSString;

@interface AWESECLaunchTaskItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ handler;

- (id)initWithName:(id)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)execute;

@end
