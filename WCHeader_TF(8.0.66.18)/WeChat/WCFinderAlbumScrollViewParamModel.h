@interface WCFinderAlbumScrollViewParamModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffsetHistory;
@property (nonatomic) BOOL isMoreThanTimeLimit;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) BOOL firstToEnterEditVideo;
@property (nonatomic) struct CGPoint { double x; double y; } sliderContentOffset;

- (id)init;

@end
