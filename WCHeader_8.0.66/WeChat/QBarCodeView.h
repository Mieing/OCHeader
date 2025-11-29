@interface QBarCodeView : MMUIView {
    int _width;
    int _height;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _data;
    BOOL _bTwoDimensional;
}

@property (nonatomic) BOOL disableDefaultAccessibility;

- (void)displayQBarCode:(struct QBAR_IMAGE { int x0; int x1; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x2; })a0 TwoDimensional:(BOOL)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
