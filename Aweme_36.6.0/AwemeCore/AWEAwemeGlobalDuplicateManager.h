@class NSString, NSMutableDictionary;

@interface AWEAwemeGlobalDuplicateManager : NSObject <AWEAwemeGlobalDuplicateManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *awemeInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)isValidModel:(id)a0;
- (void)trackWithAweme:(id)a0 fromType:(id)a1;
- (BOOL)shouldFilterAweme:(id)a0 fromType:(id)a1;
- (void)addAmeme:(id)a0 enterfrom:(id)a1;
- (id)filterDuplicatedDatasource:(id)a0 fromIndex:(long long)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)duplicateType;

@end
