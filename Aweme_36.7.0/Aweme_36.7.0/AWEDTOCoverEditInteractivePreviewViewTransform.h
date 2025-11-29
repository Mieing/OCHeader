@class NSString;

@interface AWEDTOCoverEditInteractivePreviewViewTransform : MTLModel <MTLJSONSerializing>

@property (nonatomic) double coverEditInteractivePreviewViewTransformA;
@property (nonatomic) double coverEditInteractivePreviewViewTransformB;
@property (nonatomic) double coverEditInteractivePreviewViewTransformC;
@property (nonatomic) double coverEditInteractivePreviewViewTransformD;
@property (nonatomic) double coverEditInteractivePreviewViewTransformTx;
@property (nonatomic) double coverEditInteractivePreviewViewTransformTy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;

@end
