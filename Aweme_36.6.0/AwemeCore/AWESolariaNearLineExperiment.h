@class AWESolariaNearLineConfig;

@interface AWESolariaNearLineExperiment : NSObject

@property (retain, nonatomic) AWESolariaNearLineConfig *config;

+ (id)config;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
