@protocol CSPTracker, CSPLogger;

@interface CSPConfig : NSObject

@property (retain, nonatomic) id<CSPLogger> logger;
@property (retain, nonatomic) id<CSPTracker> tracker;

+ (void)registerLogger:(id)a0;
+ (void)registerTracker:(id)a0;
+ (id)sharedConfig;

- (void).cxx_destruct;

@end
