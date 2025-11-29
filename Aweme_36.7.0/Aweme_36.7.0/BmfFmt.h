@interface BmfFmt : NSObject {
    int plane_ratio[3];
}

@property unsigned int pixel_buffer_fmt;
@property unsigned long long tex0_fmt;
@property unsigned long long tex1_fmt;
@property unsigned long long tex2_fmt;
@property int plane_count;

- (id)initWithCVPixelBufferFormat:(unsigned int)a0;
- (unsigned long long)getTexFormatByPlane:(int)a0;
- (int)getPlaneCount;
- (int)getWidthByPlaneIndex:(unsigned int)a0 WithOriginWidth:(int)a1;
- (int)getHeightByPlaneIndex:(int)a0 WithOriginHeight:(int)a1;

@end
