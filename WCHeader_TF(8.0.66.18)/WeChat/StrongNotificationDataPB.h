@class NSString, NSMutableDictionary, NSMutableArray;

@interface StrongNotificationDataPB : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *configDic;
@property (retain, nonatomic) NSMutableArray *itemAndMessageList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_configDic;
+ (void)PBArrayAdd_itemAndMessageList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
