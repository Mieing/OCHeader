@interface DataMatrix : NSObject {
    int dim;
    BOOL **data;
}

- (id)initWith:(int)a0;
- (int)dimension;
- (void)set:(BOOL)a0 x:(int)a1 y:(int)a2;
- (BOOL)valueAt:(int)a0 y:(int)a1;
- (id)toString;
- (void)dealloc;

@end
