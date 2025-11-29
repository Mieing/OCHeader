@interface CreateLiteAppViewParams : NSObject

@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) BOOL autoWidth;
@property (nonatomic) BOOL autoHeight;
@property (copy, nonatomic) id /* block */ bodySizeChange;
@property (nonatomic) BOOL enablePullUp;
@property (nonatomic) BOOL enablePullDown;
@property (nonatomic) BOOL enableFullscreenPullDown;
@property (nonatomic) double heightPercent;
@property (nonatomic) BOOL withMask;
@property (nonatomic) BOOL landscape;
@property (nonatomic) BOOL autoRotate;
@property (nonatomic) BOOL fullscreenEnter;

- (id)init;
- (id)init:(BOOL)a0;
- (void).cxx_destruct;

@end
