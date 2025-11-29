@class NSString, NSMutableDictionary;

@interface TextStateIconGroup : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *localeToGroupDescriptionDict;
@property (retain, nonatomic) NSString *groupDescription;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *groupIconURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_localeToGroupDescriptionDict;
+ (void)PBArrayAdd_groupIconURL;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithGroup:(id)a0;
- (id)initWithInstance:(id)a0;
- (id)group;
- (void)clearCachedDescription;
- (void).cxx_destruct;

@end
