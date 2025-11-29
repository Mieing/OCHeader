@class NSNumber, NSValue;

@interface TXCVideoRenderConfig : NSObject

@property (nonatomic) unsigned long long mirrorMode;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) unsigned long long fillMode;
@property (retain, nonatomic) NSNumber *backgroundColor;
@property (nonatomic) unsigned long long gSensorMode;
@property (nonatomic) int homeOrientation;
@property (nonatomic) unsigned long long customRenderFormat;
@property (nonatomic) unsigned long long customRenderBufferType;
@property (retain, nonatomic) NSValue *outputSize;
@property (nonatomic) struct vector<liteav::video::PointF, std::allocator<liteav::video::PointF>> { struct PointF *__begin_; struct PointF *__end_; struct __compressed_pair<liteav::video::PointF *, std::allocator<liteav::video::PointF>> { struct PointF *__value_; } __end_cap_; } perspectiveSrcPoints;
@property (nonatomic) struct vector<liteav::video::PointF, std::allocator<liteav::video::PointF>> { struct PointF *__begin_; struct PointF *__end_; struct __compressed_pair<liteav::video::PointF *, std::allocator<liteav::video::PointF>> { struct PointF *__value_; } __end_cap_; } perspectiveDstPoints;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
