@class NSArray, NSString;
@protocol BDUGLuckyResourceItem;

@interface BDUGLuckyActivityEntranceInfo : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyResourceItem> *resourceItems;
@property (copy, nonatomic) NSString *entryId;
@property (copy, nonatomic) NSString *extra;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)copyEntryInfoWithModel:(id)a0;

- (void)removeResourceItem:(id)a0;
- (void)addResourceItem:(id)a0;
- (void).cxx_destruct;

@end
