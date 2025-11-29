@class NSString;

@interface AEKVideoClipPreMVPDataImpl : NSObject <AEKVideoClipPreMVPData>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGPoint { double x; double y; } anchorInCanvas;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) double widthHeightRatio;
@property (nonatomic) BOOL hasEdit;
@property (copy, nonatomic) NSString *jsonString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)toJsonString;

@end
