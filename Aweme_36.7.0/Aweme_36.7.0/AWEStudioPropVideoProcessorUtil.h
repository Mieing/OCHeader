@class AWETranslationTransitionController;

@interface AWEStudioPropVideoProcessorUtil : NSObject

@property (retain, nonatomic) AWETranslationTransitionController *clipTransitionDelegate;

- (void)fillAVAssetIfNeededInAssetModel:(id)a0 completion:(id /* block */)a1;
- (id)clipVideoPageVC:(id)a0 publishViewModel:(id)a1 croppingSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)requestAVAssetFromiCloudWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
