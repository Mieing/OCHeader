@class NSArray, NSString, UIView;

@interface IESECSliceXBaseContainerElementView : IESECSliceXBaseElementView <IESECSliceXFlexSubviews>

@property (readonly, nonatomic) UIView *customContainerView;
@property (readonly, nonatomic) NSArray *elementViews;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (BOOL)setupSubElementViews;
- (id)createCustomContainerView;
- (void)setupContainerView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;

@end
