@class NSString, StandardImageContentCellMetadata;

@interface AppStandardImageContentMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) unsigned long long imageRatio;
@property (readonly, nonatomic) StandardImageContentCellMetadata *metadata;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) double layoutWidth;
@property (readonly, nonatomic) BOOL hasSourceView;

- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calculateLayoutSize;
- (id)image;
- (id)imageUrl;
- (BOOL)isShowSourceView;

@end
