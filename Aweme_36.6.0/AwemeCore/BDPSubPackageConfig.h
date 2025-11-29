@class NSString;

@interface BDPSubPackageConfig : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *root;

+ (void)bootstrapLaunch;

- (void).cxx_destruct;

@end
