@class NSString, NSMutableArray, NSMutableDictionary;

@interface TextStateExperimentTable : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *entryList;
@property (retain, nonatomic) NSMutableDictionary *keyToEntryDict;
@property (nonatomic) unsigned long long key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_entryList;
+ (void)initialize;

@end
