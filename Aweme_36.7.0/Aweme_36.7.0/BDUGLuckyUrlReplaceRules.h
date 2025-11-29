@class NSArray;
@protocol BDUGLuckyDataListItem;

@interface BDUGLuckyUrlReplaceRules : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyDataListItem> *dataList;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
