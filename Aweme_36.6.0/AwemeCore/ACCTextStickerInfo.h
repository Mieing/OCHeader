@class NSString;

@interface ACCTextStickerInfo : NSObject

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRange;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGSize { double width; double height; } normalizSize;
@property (retain, nonatomic) NSString *extra;
@property (readonly, copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithJson:(id)a0;

@end
