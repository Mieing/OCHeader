@class MMLiveBeautyResourcePackageModel;

@interface MMLiveBeautyResourcesDescriptor : NSObject

@property (retain, nonatomic) MMLiveBeautyResourcePackageModel *beautyResources;
@property (retain, nonatomic) MMLiveBeautyResourcePackageModel *makeupResources;
@property (retain, nonatomic) MMLiveBeautyResourcePackageModel *filterResources;
@property (readonly, nonatomic) BOOL empty;

+ (id)savedDescriptorWithScopeId:(id)a0;
+ (id)savedPackageWithType:(unsigned long long)a0 scopeId:(id)a1;

- (void)saveDescriptorWithScopeId:(id)a0;
- (void)savePackage:(id)a0 withScopeId:(id)a1;
- (void).cxx_destruct;

@end
