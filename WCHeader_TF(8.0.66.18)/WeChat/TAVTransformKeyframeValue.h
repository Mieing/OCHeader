@class NSString;

@interface TAVTransformKeyframeValue : NSObject <TAVKeyframeValue>

@property (nonatomic) float scale;
@property (nonatomic) float rotation;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applyEffectToSourceImage:(id)a0 param:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
