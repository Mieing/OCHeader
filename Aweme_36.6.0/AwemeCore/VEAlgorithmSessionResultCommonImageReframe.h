@interface VEAlgorithmSessionResultCommonImageReframe : VEAlgorithmSessionResult

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) BOOL isValid;

@end
