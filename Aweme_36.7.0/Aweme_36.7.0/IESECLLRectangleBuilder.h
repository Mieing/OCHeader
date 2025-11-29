@interface IESECLLRectangleBuilder : IESECLLShapeBuilder {
    struct { double top_left; double top_right; double bottom_left; double bottom_right; } _corner_radius_map;
}

@property (readonly, copy, nonatomic) id /* block */ cornerRadius;

- (void)setupShapeLayer;

@end
