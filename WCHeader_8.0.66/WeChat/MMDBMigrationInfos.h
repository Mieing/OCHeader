@class NSString, NSMutableDictionary;

@interface MMDBMigrationInfos : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *categorys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_categorys;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)getOrCreateInfoWithCategory:(unsigned long long)a0;
- (void).cxx_destruct;

@end
