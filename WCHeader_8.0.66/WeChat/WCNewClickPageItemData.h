@class NSString, NSMutableDictionary;

@interface WCNewClickPageItemData : MMObject <PBCoding>

@property (retain, nonatomic) NSString *pageID;
@property (nonatomic) int costTime;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int specialPV;
@property (retain, nonatomic) NSMutableDictionary *dicWidgetDatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pageID;
+ (void)PBArrayAdd_costTime;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_specialPV;
+ (void)PBArrayAdd_dicWidgetDatas;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
