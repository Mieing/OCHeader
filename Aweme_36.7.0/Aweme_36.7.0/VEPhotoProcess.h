@class VEPixelBufferCopyUtils;

@interface VEPhotoProcess : VERunloopObject

@property (retain, nonatomic) VEPixelBufferCopyUtils *bufferCopyUtils;

+ (void)rawFilter:(id)a0 applyParam:(id)a1;

- (struct __CVBuffer { } *)processPHPhoto:(id)a0 rawParam:(id)a1;
- (struct __CVBuffer { } *)fxn_processPHPhoto:(id)a0 rawParam:(id)a1;
- (struct __CVBuffer { } *)dqs_processPHPhoto:(id)a0 filterType:(long long)a1;
- (struct __CVBuffer { } *)ccdr_processPHPhoto:(id)a0 filterType:(long long)a1;
- (struct __CVBuffer { } *)cpm35_processPHPhoto:(id)a0 filterType:(long long)a1;
- (id)p_fxn_processRawData:(id)a0 rawParam:(id)a1;
- (id)p_fxn_Process:(id)a0 rawParam:(id)a1;
- (struct __CVBuffer { } *)processRawData:(id)a0 rawParam:(id)a1;
- (void).cxx_destruct;

@end
