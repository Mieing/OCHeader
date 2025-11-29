@interface TempoiOS.TempoLayout : NSObject <TempoFlexLayoutDataSource> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ flexLayout;
    void /* unknown type, empty encoding */ childrenLayoutList;
    void /* unknown type, empty encoding */ childrenFlexLayoutList;
}

- (id)childrenLayoutList:(id)a0;
- (struct CGSize { double x0; double x1; })nodeSizeByConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (float)baselineByWidth:(float)a0 height:(float)a1;
- (void).cxx_destruct;
- (id)init;

@end
