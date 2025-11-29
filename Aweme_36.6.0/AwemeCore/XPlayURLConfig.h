@class NSString;

@interface XPlayURLConfig : NSObject

@property (nonatomic) long long region;
@property (nonatomic) BOOL enablePPE;
@property (copy, nonatomic) NSString *lane;
@property (copy, nonatomic) id /* block */ cnURLBlock;
@property (copy, nonatomic) id /* block */ vaURLBlock;
@property (copy, nonatomic) id /* block */ sgURLBlock;
@property (copy, nonatomic) id /* block */ boeURLBlock;
@property (copy, nonatomic) id /* block */ overseaURLBlock;
@property (copy, nonatomic) id /* block */ cnDebugURLBlock;

+ (void)configURLBlockBOE;
+ (void)registURLBlockIfNeeded;
+ (void)configURLBlockCNDebug;
+ (void)configURLBlockCN;
+ (void)configURLBlockOversea;
+ (void)configURLBlockSG;
+ (void)configURLBlockVA;
+ (id)sharedConfig;

- (id)urlForType:(long long)a0;
- (id)urlByDomain:(id)a0;
- (id)socketConfig;
- (id)configForType:(long long)a0 class:(Class)a1;
- (id)urlByService:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)configForType:(long long)a0;

@end
