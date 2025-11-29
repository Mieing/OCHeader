@class BackendDslInfo, NSString, UIView;
@protocol IESLiveDynamicManagerReaction;

@interface IESLiveDynamicComponentView : UIView <IESLiveDynamicViewDelegate, HTSLivePluginLayoutView>

@property (retain, nonatomic) BackendDslInfo *dslInfo;
@property (retain, nonatomic) UIView *dynamicView;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (weak, nonatomic) id<IESLiveDynamicManagerReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)triggerSliceXEvent:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)sizeOfDynamicView:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoad;
- (void)viewDidLoadFailedWithError:(id)a0;
- (id)initWithDslInfo:(id)a0 reaction:(id)a1;
- (void).cxx_destruct;
- (id)viewType;
- (void)setup;

@end
