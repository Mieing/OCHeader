@interface SightIDKeyReport : NSObject

+ (void)reportUploadSize:(unsigned int)a0;
+ (void)reportUploadResult:(BOOL)a0;
+ (void)reportDownloadResult:(BOOL)a0;
+ (void)reportUploadC2CAlbumVideo:(id)a0 selectedKbpsLevel:(int)a1 containsWXTag:(BOOL)a2;
+ (void)reportUploadC2CRecordVideo:(id)a0;
+ (void)reportUploadSnsAlbumVideo:(id)a0 containsWXTag:(BOOL)a1;
+ (void)reportUploadSnsRecordVideo:(id)a0;
+ (void)reportCompressVideoFailed;
+ (void)reportConcreteABAPrams:(int)a0 videosize:(struct CGSize { double x0; double x1; })a1 inPara:(struct WxVideoTransParaABA { int x0; int x1; float x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; float x12; float x13; int x14; float x15; float x16; BOOL x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; BOOL x26; float x27; float x28; int x29; int x30; struct WXColorProperties { int x0; int x1; int x2; int x3; } x31; BOOL x32; int x33; int x34; })a2 abaReportPrams:(id)a3 VideoEncodeParams:(id)a4 consumingTime:(long long)a5 abaControlPrams:(struct ABAControlParams { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; BOOL x8; int x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; float x14; BOOL x15; BOOL x16; BOOL x17; float x18; float x19; BOOL x20; int x21; BOOL x22; float x23; float x24; float x25; int x26; BOOL x27; BOOL x28; char *x29; BOOL x30; int x31; BOOL x32; })a6;
+ (void)reportSWTransCodingPrams:(struct ReportStaticPrams { int x0; double x1; double x2; double x3; double x4; double x5; int x6; int x7; int x8; BOOL x9; int x10; int x11; double x12; })a0 mEncDecPrams:(struct EncDecPrams { double x0; double x1; double x2; double x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; double x13; double x14; BOOL x15; struct WXAVRational { int x0; int x1; } x16; struct WXAVRational { int x0; int x1; } x17; double x18; double x19; double x20; double x21; BOOL x22; BOOL x23; })a1 mTranscodingPrams:(struct TranscodingPrams { int x0; int x1; int x2; float x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; int x16; int x17; float x18; int x19; })a2 Scene:(int)a3;

@end
