@class NSArray, NSDictionary, NSValue, NSString, NSNumber;

@interface IESLiveGCStreamLayoutResult : NSObject <IESLiveGameContentStreamLayoutResult>

@property (retain, nonatomic) NSNumber *usedTs;
@property (nonatomic) struct { long long scaleType; long long alignMode; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame; NSValue *viceViewFrame; BOOL useScaleHeightToWidth; } mainLayoutResult;
@property (copy, nonatomic) NSArray *multiViewResults;
@property (copy, nonatomic) NSDictionary *layoutInfoForTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWith:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a0 multiViewResults:(id)a1 layoutInfoForTrack:(id)a2 usedTs:(id)a3;
- (void).cxx_destruct;

@end
