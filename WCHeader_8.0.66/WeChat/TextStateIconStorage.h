@class NSRecursiveLock, NSMutableDictionary, TextStatePublishIconList, NSString, NSMutableArray;

@interface TextStateIconStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *groups;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSRecursiveLock *accessLock;
@property (retain, nonatomic) NSMutableDictionary *idToIconDict;
@property (readonly, nonatomic) TextStatePublishIconList *publishIconList;
@property (retain, nonatomic) NSString *configId;
@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned long long showIconMaxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_configId;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_groups;
+ (void)PBArrayAdd_icons;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id)config;
- (void)immediateLoadData;
- (id)iconForId:(id)a0;
- (void)clearCachedDescription;
- (void).cxx_destruct;

@end
