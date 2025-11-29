@class TAVVideoCompositionRenderInfo;
@protocol TAVKeyframeValue;

@interface TAVKeyframeValueParam : NSObject

@property (retain, nonatomic) id<TAVKeyframeValue> fromValue;
@property (retain, nonatomic) id<TAVKeyframeValue> toValue;
@property (nonatomic) double tween;
@property (retain, nonatomic) TAVVideoCompositionRenderInfo *info;

- (void).cxx_destruct;

@end
