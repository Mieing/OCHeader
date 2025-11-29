@class IESMMKeyFrameInfo, NSString, UIColor;

@interface IESMMCanvasSource : NSObject <NSCopying, KeyFrameOperationDelegate>

@property (retain, nonatomic) IESMMKeyFrameInfo *canvasKeyFrameInfo;
@property (nonatomic) struct CGPoint { double x; double y; } centerPos;
@property (nonatomic) double scale;
@property (nonatomic) double rotateAngle;
@property (nonatomic) BOOL isAutoFitScale;
@property (nonatomic) unsigned long long rotateMode;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) double alpha;
@property (nonatomic) NSString *videoTrackID;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) long long borderWidth;
@property (nonatomic) BOOL enableAntiAliasing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)canvasSourceWithDic:(id)a0;

- (id)toDicInfo;
- (void)setkeyFrameInfo:(id)a0 withPts:(unsigned long long)a1;
- (void)removekeyFrameInfo:(unsigned long long)a0;
- (void)removeallKeyFrameInfo;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (BOOL)needRefreshKeyFrame;
- (BOOL)nle_equalToCanvasSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
