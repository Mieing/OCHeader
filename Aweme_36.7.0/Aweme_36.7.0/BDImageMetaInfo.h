@class NSString, UIView;

@interface BDImageMetaInfo : NSObject

@property (class, nonatomic) long long maxScrollViewSearchDepth;

@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long memoryFootprint;
@property (nonatomic) unsigned long long codeType;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (copy, nonatomic) NSString *webURL;
@property (weak, nonatomic) UIView *requestView;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) BOOL previousNeedImage;
@property (nonatomic) double minimumZoomScale;
@property (nonatomic) double maximumZoomScale;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGSize { double width; double height; } sizeLimit;
@property (nonatomic) unsigned long long memoryLimit;

- (id)initWithRequest:(id)a0 data:(id)a1;
- (void)memoryCostInfo:(id)a0 decoderOptions:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
