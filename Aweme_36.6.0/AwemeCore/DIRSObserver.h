@interface DIRSObserver : NSObject

@property (copy, nonatomic) id /* block */ onSessionLaunch;
@property (copy, nonatomic) id /* block */ onSessionTerminate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
