@interface VmsdkModuleWrapper : NSObject

@property (retain, nonatomic) Class moduleClass;
@property (retain, nonatomic) id param;

- (void).cxx_destruct;
- (void)dealloc;

@end
