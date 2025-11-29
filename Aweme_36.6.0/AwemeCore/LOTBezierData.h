@interface LOTBezierData : NSObject {
    struct CGPoint { double x0; double x1; } *_vertices;
    struct CGPoint { double x0; double x1; } *_inTangents;
    struct CGPoint { double x0; double x1; } *_outTangents;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL closed;

- (void)initializeData:(id)a0;
- (struct CGPoint { double x0; double x1; })_vertexAtIndex:(long long)a0 inArray:(id)a1;
- (struct CGPoint { double x0; double x1; })inTangentAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })outTangentAtIndex:(long long)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })vertexAtIndex:(long long)a0;

@end
