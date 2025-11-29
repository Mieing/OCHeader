@class NSArray;

@interface AWEStudioComposerBasePageConfig : AWEStudioComposerBaseFeatureConfig

@property (copy, nonatomic) id /* block */ customizedComponents;
@property (retain, nonatomic) NSArray *customizedFeatureInfos;

- (id)apc_createNewPageConfigIfNeededWithDataContext:(id)a0;
- (void).cxx_destruct;

@end
