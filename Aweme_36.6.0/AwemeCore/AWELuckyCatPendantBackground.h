@class AWELuckyCatPendantBackgroundStroke, NSString, AWELuckyCatPendantIcon, AWELuckyCatPendantAnimate;

@interface AWELuckyCatPendantBackground : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *color;
@property (retain, nonatomic) AWELuckyCatPendantIcon *pendantIcon;
@property (retain, nonatomic) AWELuckyCatPendantAnimate *pendantAnimate;
@property (nonatomic) double alpha;
@property (retain, nonatomic) AWELuckyCatPendantBackgroundStroke *stroke;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
