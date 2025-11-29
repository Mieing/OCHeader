@class NSString;

@interface GXLottieAnimationModel : GXAnimationBaseModel

@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL isLocal;
@property (copy, nonatomic) NSString *value;

- (void)setupAnimationInfo:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
