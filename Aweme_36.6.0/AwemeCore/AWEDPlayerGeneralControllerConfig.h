@interface AWEDPlayerGeneralControllerConfig : NSObject

@property (nonatomic) unsigned long long controllerType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (id)initWithControllerType:(unsigned long long)a0;

@end
