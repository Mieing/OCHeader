@class NSString;

@interface IESSoloKTVTemplatePositionModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMetalRect:(struct CGSize { double x0; double x1; })a0;

@end
