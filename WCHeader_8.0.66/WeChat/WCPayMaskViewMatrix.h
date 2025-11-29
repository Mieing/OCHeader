@interface WCPayMaskViewMatrix : NSObject {
    char *data;
}

@property (nonatomic) struct { unsigned long long x; unsigned long long y; } max;

- (id)initWithMaxX:(unsigned long long)a0 MaxY:(unsigned long long)a1;
- (id)initWithMax:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (char)valueForCoordinates:(unsigned long long)a0 y:(unsigned long long)a1;
- (void)setValue:(char)a0 forCoordinates:(unsigned long long)a1 y:(unsigned long long)a2;
- (char)getValueWithCoordinates:(unsigned long long)a0 y:(unsigned long long)a1;
- (void)fillWithValue:(char)a0;
- (void)dealloc;

@end
