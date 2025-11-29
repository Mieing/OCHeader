@class AWESearchDynamicEngine, NSString, AWESearchGroupBuyDynamicContainerConfig, UIView, AWEDynamicPatchModel;

@interface AWESearchGroupBuyDynamicContainerView : UIView <AWESearchDynamicEngineDelegate>

@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatch;
@property (retain, nonatomic) AWESearchDynamicEngine *dynamicEngine;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWESearchGroupBuyDynamicContainerConfig *config;
@property (retain, nonatomic) UIView *lynxComponentView;
@property (weak, nonatomic) UIView *mySuperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContainer;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithDynamicContainerConfig:(id)a0 dynamicPatch:(id)a1 containerWidth:(double)a2 superView:(id)a3;
- (id)dynamicContainerCardTypeName;
- (double)dynamicContainerSafeBottomInset;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
