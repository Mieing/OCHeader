@interface AWECertStoreSettings : NSObject

@property (nonatomic) BOOL certStatementEnabled;

+ (BOOL)certStatementEnabled;
+ (void)setCertStatementEnabled:(BOOL)a0;
+ (id)sharedSettings;

- (id)init;

@end
