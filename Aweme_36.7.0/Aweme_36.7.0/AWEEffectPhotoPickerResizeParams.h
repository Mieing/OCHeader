@class IESEffectModel;

@interface AWEEffectPhotoPickerResizeParams : NSObject

@property (retain, nonatomic) IESEffectModel *effectModel;
@property (nonatomic) struct CGSize { double width; double height; } originalTargetSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (readonly, nonatomic) long long contentMode;

- (id)initWithEffectModel:(id)a0 originalTargetSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
