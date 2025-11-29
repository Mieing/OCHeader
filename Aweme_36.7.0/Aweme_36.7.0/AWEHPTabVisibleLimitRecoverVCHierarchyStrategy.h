@class NSDictionary;

@interface AWEHPTabVisibleLimitRecoverVCHierarchyStrategy : AWEBaseBizConfigModel

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSDictionary *vcHierarchyWhiteList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
