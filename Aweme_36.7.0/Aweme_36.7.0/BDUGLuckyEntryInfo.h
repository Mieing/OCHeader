@class NSArray;
@protocol BDUGLuckyActivityEntranceInfo;

@interface BDUGLuckyEntryInfo : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyActivityEntranceInfo> *entryItems;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
