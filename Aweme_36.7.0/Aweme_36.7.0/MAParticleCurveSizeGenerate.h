@class NSString;

@interface MAParticleCurveSizeGenerate : NSObject <MAParticleSizeGenerate> {
    struct CurveSizeOverLife { void /* function */ **x0; int x1; float x2; float x3; float x4; } *_curveSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)getSizeX:(float)a0;
- (float)getSizeY:(float)a0;
- (float)getSizeZ:(float)a0;
- (id)initWithCurveX:(float)a0 Y:(float)a1 Z:(float)a2;
- (void)dealloc;

@end
