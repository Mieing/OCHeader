@class NSString, BDXContext, NSDictionary, NSArray, NSSet, NSMutableArray;

@interface HunterContext : NSObject

@property (retain, nonatomic) BDXContext *bdxContext;
@property (readonly, nonatomic) BDXContext *bdxContext;
@property (nonatomic) unsigned long long containerType;
@property (copy, nonatomic) NSString *containerScene;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSDictionary *customUIElements;
@property (retain, nonatomic) NSArray *enabledHunterCommonPluginList;
@property (retain, nonatomic) NSSet *enabledPluginHookList;
@property (nonatomic) BOOL useHunterCache;
@property (retain, nonatomic) NSMutableArray *pluginList;
@property (copy, nonatomic) id /* block */ loadTypeBlock;
@property (nonatomic) long long loadType;
@property (retain, nonatomic) NSDictionary *clientExtraData;
@property (nonatomic) BOOL disableHunterMonitor;

- (void)configureInitialBDXContext;
- (id)initBulletContext;
- (void)configureBDXContext;
- (void).cxx_destruct;

@end
