@interface WeVoipRciABTestInfo : NSObject

@property (nonatomic) BOOL enableRci;

+ (id)sharedInstance;

- (void)loadInfo;

@end
