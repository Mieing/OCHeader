@interface glUSM3Fusion : NSObject {
    unsigned int mFrameBuffer;
    unsigned int mTextureid;
    unsigned int mProgramHandle;
    int mWidth;
    int mHeight;
    int mInputFormat;
    int mSharpenMode;
    int mrate;
    unsigned int mpositionid;
    unsigned int mtexcoordid;
    unsigned int vertexBuffer;
    unsigned int vertexArray;
    unsigned int minputImageTextureid;
    unsigned int mresiduemapImageTextureid;
    unsigned int mblurredImageTexture1id;
    unsigned int mblurredImageTexture2id;
    unsigned int mblurredImageTexture3id;
    unsigned int mweightsid;
    long long scene;
}

- (id)init:(int)a0 scene:(long long)a1;
- (void)dealloc;
- (void)destroybuffers;
- (unsigned int)complieshader:(const char *)a0 strlen:(int)a1 type:(unsigned int)a2;
- (BOOL)compileshaders;
- (void)updatebuffer:(int)a0 height:(int)a1;
- (void)setupVBOs;
- (void)setrate:(int)a0;
- (void)setmode:(int)a0;
- (unsigned int)process:(unsigned int)a0 input2:(unsigned int)a1 input3:(unsigned int)a2 input4:(unsigned int)a3 width:(int)a4 height:(int)a5;
- (unsigned int)process:(unsigned int)a0 input2:(unsigned int)a1 input3:(unsigned int)a2 input4:(unsigned int)a3 width:(int)a4 height:(int)a5 sharpenratio:(float)a6;

@end
