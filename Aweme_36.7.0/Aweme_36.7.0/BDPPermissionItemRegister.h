@class NSMutableArray;

@interface BDPPermissionItemRegister : NSObject

@property (retain, nonatomic) NSMutableArray *providers;

+ (id)allProviders;
+ (void)registerProvider:(id)a0;
+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
