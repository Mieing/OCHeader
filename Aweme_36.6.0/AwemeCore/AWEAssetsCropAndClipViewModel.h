@class NSURL, NSString;

@interface AWEAssetsCropAndClipViewModel : NSObject

@property (nonatomic) long long pageType;
@property (nonatomic) BOOL isLivePhotoAsset;
@property (nonatomic) long long livePhotoState;
@property (retain, nonatomic) NSURL *staticImageURL;
@property (nonatomic) long long slidersDragType;
@property (nonatomic) double minSpaceWhenMultiDuration;
@property (copy, nonatomic) NSString *customBottomDisplayContent;
@property (nonatomic) BOOL contentNeedBlockingCheck;
@property (nonatomic) BOOL forbidHandleZoom;

- (BOOL)isMultiDuration;
- (void).cxx_destruct;
- (id)init;

@end
