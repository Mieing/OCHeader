@class NSString;

@interface AWERLVirtualFlexView : AWERLVirtualImageView <AWERLVirtualViewOverride>

@property (nonatomic) long long axis;
@property (nonatomic) long long alignment;
@property (nonatomic) long long distribution;
@property (nonatomic) double spacing;
@property (nonatomic) double fillSuperView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL useBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)spacing:(double)a0;
- (id)initWithAxis:(long long)a0 distribution:(long long)a1 alignment:(long long)a2;
- (id)fillSuperView:(BOOL)a0;
- (id)useBackgroundView:(BOOL)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 subviews:(id)a1;
- (struct CGSize { double x0; double x1; })layoutThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canRenderView;
- (id)axis:(long long)a0;
- (id)distribution:(long long)a0;
- (id)alignment:(long long)a0;
- (void)debugBuildLayoutDescriptions:(id)a0;
- (id)subviews:(id)a0;
- (id)init;
- (id)padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
