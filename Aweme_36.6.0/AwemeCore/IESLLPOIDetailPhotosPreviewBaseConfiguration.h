@class NSArray;

@interface IESLLPOIDetailPhotosPreviewBaseConfiguration : NSObject

@property (nonatomic) BOOL disableZoomTransition;
@property (nonatomic) BOOL allowLoop;
@property (nonatomic) long long defaultIdx;
@property (copy, nonatomic) NSArray *photos;
@property (nonatomic) BOOL shouldContainBottomHeight;
@property (nonatomic) BOOL useNewVideoStyle;

- (void).cxx_destruct;

@end
