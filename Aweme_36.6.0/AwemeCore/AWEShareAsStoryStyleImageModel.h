@class NSString, AWEShareAsStoryStyleFrameModel;

@interface AWEShareAsStoryStyleImageModel : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) AWEShareAsStoryStyleFrameModel *frameModel;

+ (id)modelCustomPropertyMapper;
+ (id)initWithPath:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
