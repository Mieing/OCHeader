@interface ASSArpResolveManager : NSObject

@property (copy, nonatomic) id /* block */ callback;

+ (id)sharedInstance;

- (void)pingResult:(id)a0;
- (void)startPing:(id /* block */)a0;
- (void).cxx_destruct;

@end
