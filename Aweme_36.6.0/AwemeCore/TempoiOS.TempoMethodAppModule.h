@class NSString;

@interface TempoiOS.TempoMethodAppModule : TempoMethodModule

@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void)loadModule;

@end
