@interface glAdjustResidue : NSObject {
    unsigned int mFrameBuffer;
    unsigned int mTextureid;
    unsigned int mProgramHandle;
    int mWidth;
    int mHeight;
    unsigned int mpositionid;
    unsigned int mtexcoordid;
    unsigned int minputImageTextureid;
    unsigned int mblurredImageTexture1id;
    unsigned int mblurredImageTexture3id;
}

- (id)init;
- (void)dealloc;
- (void)destroybuffers;
- (unsigned int)complieshader:(const char *)a0 strlen:(int)a1 type:(unsigned int)a2;
- (BOOL)compileshaders;
- (void)updatebuffer:(int)a0 height:(int)a1;
- (void)setupVBOs;
- (unsigned int)process:(unsigned int)a0 input2:(unsigned int)a1 input3:(unsigned int)a2 width:(int)a3 height:(int)a4;

@end
