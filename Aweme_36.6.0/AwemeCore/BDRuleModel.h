@class BDRuleQuickExecutor, NSString, NSDictionary, NSArray;

@interface BDRuleModel : NSObject

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *strategy;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *conf;
@property (copy, nonatomic) NSString *cel;
@property (retain, nonatomic) NSArray *commands;
@property (retain, nonatomic) NSArray *children;
@property (retain, nonatomic) BDRuleQuickExecutor *qucikExecutor;

+ (BOOL)__swizzleInstanceMethod:(SEL)a0 with:(SEL)a1;
+ (void)preload;

- (void)precache_setCel:(id)a0;
- (id)initWithDictionary:(id)a0 key:(id)a1 strategy:(id)a2 source:(id)a3;
- (void)loadCommandsAndEnableExecutor:(BOOL)a0;
- (id)extraCheckCelResult:(BOOL)a0 env:(id)a1;
- (void)postProcessWithResult:(id)a0 context:(id)a1;
- (id)jsonFormat;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 key:(id)a1;

@end
