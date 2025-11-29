@class IESLiveEffectConfig, NSString;

@interface IESLiveEffectAlgorithm : NSObject <IESLiveEffectAlgorithmProtocol>

@property (retain, nonatomic) IESLiveEffectConfig *config;
@property (nonatomic) void *renderMangerHandle;
@property (nonatomic) BOOL deviceMotionDetectStarted;
@property (nonatomic) unsigned long long algorithmProcessRequirement;
@property (nonatomic) unsigned long long algorithmResultRequirement;
@property (copy, nonatomic) id /* block */ algorithmResultBlock;
@property (nonatomic) BOOL useNewEffectLabAPI;
@property (nonatomic) struct CGSize { double width; double height; } effectTextureSize;
@property (nonatomic) int faceCount;
@property (nonatomic) unsigned long long usedEffect;
@property (nonatomic) BOOL isFrontCamera;
@property (copy, nonatomic) id /* block */ algorithmDetectStatus;
@property (copy, nonatomic) id /* block */ facePointBlock;
@property (copy, nonatomic) id /* block */ effectMsgListener;
@property (copy, nonatomic) id /* block */ algorithmSeiBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setHandDetectLowpower:(BOOL)a0;
- (BOOL)updatFaceDectectIntervalTime:(int)a0;
- (BOOL)setMattingDetectModel:(BOOL)a0;
- (void)setAlgorithmRequirement:(unsigned long long)a0 algorithmParam:(unsigned long long)a1 enableDetect:(BOOL)a2;
- (void)setAlgorithmResultRequirement:(unsigned long long)a0 withCallbackBlock:(id /* block */)a1;
- (void)updateConfig:(id)a0;
- (void)resetFacePointBlock:(id /* block */)a0;
- (void)resetEffectMsgListnerBlock:(id /* block */)a0;
- (void)updateAlgorithmResultAccordMsg:(unsigned long long)a0;
- (BOOL)effectAddBachAlgorithmConfig:(id)a0;
- (int)getFaceCount;
- (int)p_processFaceResult;
- (void)p_processFacePointResult:(struct bef_face_info_st { struct bef_face_106_st { struct bef_rect_t { int x0; int x1; int x2; int x3; } x0; float x1; struct bef_fpoint_t { float x0; float x1; } x2[106]; float x3[106]; float x4; float x5; float x6; float x7; int x8; unsigned int x9; unsigned int x10; } x0[10]; struct bef_face_ext_info_t { int x0; int x1; int x2; int x3; struct bef_fpoint_t { float x0; float x1; } x4[22]; struct bef_fpoint_t { float x0; float x1; } x5[22]; struct bef_fpoint_t { float x0; float x1; } x6[13]; struct bef_fpoint_t { float x0; float x1; } x7[13]; struct bef_fpoint_t { float x0; float x1; } x8[64]; struct bef_fpoint_t { float x0; float x1; } x9[20]; struct bef_fpoint_t { float x0; float x1; } x10[20]; } x1[10]; int x2; })a0;
- (struct bef_effect_remark_st { unsigned short x0; unsigned short x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; BOOL x51; BOOL x52; BOOL x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; BOOL x61; BOOL x62; BOOL x63; BOOL x64; BOOL x65; BOOL x66; BOOL x67; BOOL x68; BOOL x69; BOOL x70; BOOL x71; BOOL x72; BOOL x73; BOOL x74; BOOL x75; BOOL x76; BOOL x77; BOOL x78; BOOL x79; BOOL x80; BOOL x81; BOOL x82; BOOL x83; BOOL x84; BOOL x85; BOOL x86; BOOL x87; BOOL x88; BOOL x89; BOOL x90; BOOL x91; BOOL x92; BOOL x93; BOOL x94; BOOL x95; BOOL x96; BOOL x97; BOOL x98; BOOL x99; BOOL x100; } *)p_setAlgorithmInformationToEffectWithTextureSize:(struct CGSize { double x0; double x1; })a0;
- (int)p_processAlgorithmResultRequirement;
- (id)initWithConfig:(id)a0 effectHandle:(void *)a1;
- (int)algorithmProcessingWithTexture:(int)a0 textureSize:(struct CGSize { double x0; double x1; })a1 nativeBuffer:(void *)a2 timeStamp:(double)a3 forceDetect:(BOOL)a4;
- (void).cxx_destruct;
- (void)dealloc;

@end
