@interface MSUSBHelper : NSObject

@property (nonatomic) int connected;
@property (copy, nonatomic) id /* block */ silentNotify;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
