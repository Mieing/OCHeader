@interface TencentLBSGPSEncode : NSObject

@property (nonatomic) double casm_rr;
@property (nonatomic) double casm_t1;
@property (nonatomic) double casm_t2;
@property (nonatomic) double casm_x1;
@property (nonatomic) double casm_y1;
@property (nonatomic) double casm_x2;
@property (nonatomic) double casm_y2;
@property (nonatomic) double casm_f;

- (id)init;
- (double)yj_sin2:(double)a0;
- (double)Transform_yj5Withx:(double)a0 withy:(double)a1;
- (double)Transform_yjy5Withx:(double)a0 withy:(double)a1;
- (double)Transform_jy5Withx:(double)a0 withy:(double)a1;
- (double)Transform_jyj5Withx:(double)a0 withy:(double)a1;
- (double)random_yj;
- (void)IniCasmWithT:(double)a0 withLg:(double)a1 withLa:(double)a2;
- (id)wgtochina_lbwithFlag:(int)a0 withLg:(int)a1 withLa:(int)a2 withh:(int)a3 withW:(int)a4 withT:(int)a5;
- (BOOL)isValid:(long long)a0;
- (id)getEncryPointwithlng:(double)a0 withlat:(double)a1;
- (struct CLLocationCoordinate2D { double x0; double x1; })getEncryCoord:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
