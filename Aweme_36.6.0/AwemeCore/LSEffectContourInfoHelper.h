@protocol LSEffectContourInfoHelperDataSource;

@interface LSEffectContourInfoHelper : NSObject

@property (weak, nonatomic) id<LSEffectContourInfoHelperDataSource> datasource;
@property (nonatomic) struct contour_info_st { unsigned char x0; unsigned short x1; unsigned short x2; struct con_string_ { unsigned short x0; unsigned char x1[0]; } x3; struct contour_extra_ { unsigned char x0; unsigned short x1; unsigned char x2[0]; } x4; unsigned char x5; struct contour_item_ { unsigned short x0; struct point_ { unsigned short x0; unsigned short x1; } x1[0]; } x6[0]; } *effectContourInfo;

- (struct contour_info_st { unsigned char x0; unsigned short x1; unsigned short x2; struct con_string_ { unsigned short x0; unsigned char x1[0]; } x3; struct contour_extra_ { unsigned char x0; unsigned short x1; unsigned char x2[0]; } x4; unsigned char x5; struct contour_item_ { unsigned short x0; struct point_ { unsigned short x0; unsigned short x1; } x1[0]; } x6[0]; } *)convertContourInfoWithFindContourBuffer:(void *)a0 dataLength:(int *)a1;
- (int)correctContourInfoWithData:(struct contour_info_st { unsigned char x0; unsigned short x1; unsigned short x2; struct con_string_ { unsigned short x0; unsigned char x1[0]; } x3; struct contour_extra_ { unsigned char x0; unsigned short x1; unsigned char x2[0]; } x4; unsigned char x5; struct contour_item_ { unsigned short x0; struct point_ { unsigned short x0; unsigned short x1; } x1[0]; } x6[0]; } *)a0;
- (int)compressContourInfoWithInData:(const struct contour_info_st { unsigned char x0; unsigned short x1; unsigned short x2; struct con_string_ { unsigned short x0; unsigned char x1[0]; } x3; struct contour_extra_ { unsigned char x0; unsigned short x1; unsigned char x2[0]; } x4; unsigned char x5; struct contour_item_ { unsigned short x0; struct point_ { unsigned short x0; unsigned short x1; } x1[0]; } x6[0]; } *)a0 inSize:(int)a1 outData:(void *)a2 outSize:(int *)a3;
- (int)unCompressContourInfoWithInData:(const void *)a0 inSize:(int)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
