@class NSDictionary, GXStyleModel;

@interface GXStyle : NSObject

@property (nonatomic) void *rustptr;
@property (nonatomic) void *prevRustptr;
@property (retain, nonatomic) NSDictionary *styleInfo;
@property (retain, nonatomic) GXStyleModel *styleModel;

- (void)updateRustPtr;
- (void)freePrevRustptr;
- (void)setupStyleInfo:(id)a0;
- (BOOL)isValidPtr:(void *)a0;
- (void)adjustRustCreateRect:(struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; struct { int x0; float x1; } x2; struct { int x0; float x1; } x3; } *)a0;
- (void)adjustRustCreateDimension:(struct { int x0; float x1; } *)a0;
- (void)adjustRustCreateSize:(struct { struct { int x0; float x1; } x0; struct { int x0; float x1; } x1; } *)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
