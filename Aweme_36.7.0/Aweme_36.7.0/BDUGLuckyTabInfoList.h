@class NSArray;
@protocol BDUGLuckyTabInfo;

@interface BDUGLuckyTabInfoList : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyTabInfo> *tabInfos;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
