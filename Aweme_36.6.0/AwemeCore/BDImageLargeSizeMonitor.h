@class NSString, NSURL, UIImage, UIView;

@interface BDImageLargeSizeMonitor : NSObject

@property (class, nonatomic) BOOL reportIgnoreView;

@property (nonatomic) BOOL monitorEnable;
@property (nonatomic) unsigned long long fileSizeLimit;
@property (nonatomic) unsigned long long memoryLimit;
@property (nonatomic) double viewResolutionScaleLimit;
@property (nonatomic) BOOL loadSuccess;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) double fileSize;
@property (weak, nonatomic) UIView *requestView;
@property (weak, nonatomic) UIImage *requestImage;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageTag;
@property (retain, nonatomic) id userInfo;

- (void)trackLargeImageMonitor;
- (id)bd_getViewPath:(id)a0;
- (id)pathIndexOfSameClass:(id)a0 child:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
