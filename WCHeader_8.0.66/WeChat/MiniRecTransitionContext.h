@class NSString;

@interface MiniRecTransitionContext : NSObject

@property (nonatomic) unsigned long long transitionType;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *taskKey;

- (id)initWithTaskName:(id)a0 taskKey:(id)a1 type:(unsigned long long)a2;
- (BOOL)shouldMinimizeAsContent;
- (BOOL)shouldMinimizeAsDefault;
- (id)fooTaskData;
- (void).cxx_destruct;

@end
