@class NSString, NSMutableDictionary;

@interface BrandServiceStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicDataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicDataItem;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
