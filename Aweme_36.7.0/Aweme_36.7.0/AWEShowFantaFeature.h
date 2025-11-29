@class NSString;

@interface AWEShowFantaFeature : AWEBaseBizConfigModel <AWEShowFantaFeatureProtocol>

@property (nonatomic) double createTime;
@property (nonatomic) double updateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageKey;
+ (id)loadFeature;
+ (id)featureKey;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toFeatureJson;
- (void)clearDataWhenExpired;
- (id)transformFeatureValueForModelJson:(id)a0;
- (void)clear;
- (void)save;
- (BOOL)isExpired;

@end
