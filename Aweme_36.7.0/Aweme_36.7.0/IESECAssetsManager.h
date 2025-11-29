@class NSString, IESECBundle;

@interface IESECAssetsManager : NSObject

@property (copy, nonatomic) NSString *type;
@property (weak, nonatomic) IESECBundle *bundle;
@property (copy, nonatomic) NSString *assetsDirectory;

- (id)initWithBundle:(id)a0 type:(id)a1;
- (id)getFilesOfType:(id)a0 inDirectory:(id)a1 recursive:(BOOL)a2;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
