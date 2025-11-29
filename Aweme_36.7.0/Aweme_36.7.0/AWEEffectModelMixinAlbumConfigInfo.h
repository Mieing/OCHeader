@class NSDictionary, IESEffectModel;

@interface AWEEffectModelMixinAlbumConfigInfo : NSObject

@property (weak, nonatomic) IESEffectModel *hostEffectModel;
@property (readonly, nonatomic) unsigned long long albumFilterOption;
@property (readonly, nonatomic) unsigned long long lessThanMinSizeOption;
@property (readonly, nonatomic) unsigned long long greatThanTargetSizeOption;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (readonly, copy, nonatomic) NSDictionary *resizeParams;

- (struct CGSize { double x0; double x1; })resizeSizeWithKey:(id)a0;
- (void).cxx_destruct;

@end
