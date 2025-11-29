@class NSString, NSMutableDictionary;

@interface BTOftenReadBizCache : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *contactDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_contactDic;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
