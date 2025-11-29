@interface NPConfigurationManager : NSObject

@property (nonatomic) BOOL enablePreConnect;

+ (id)sharedConfiguration;

- (id)init;
- (void)updateWithConfiguration:(id)a0;

@end
