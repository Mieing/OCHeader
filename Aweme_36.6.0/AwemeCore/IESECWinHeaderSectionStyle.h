@class NSString;

@interface IESECWinHeaderSectionStyle : MTLModel <MTLJSONSerializing>

@property (nonatomic) double marginTop;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginBottom;
@property (nonatomic) double marginRight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithEdge:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
