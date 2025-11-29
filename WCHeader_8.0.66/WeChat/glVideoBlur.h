@interface glVideoBlur : NSObject {
    unsigned int mFrameBuffer[3];
    unsigned int mTextureid[3];
    unsigned int mProgramHandle;
    int mWidth;
    int mHeight;
    unsigned int mpositionid;
    unsigned int mtexcoordid;
    unsigned int vertexBuffer;
    unsigned int vertexArray;
    unsigned int minputImageTextureid;
    unsigned int mtexSizeid;
    unsigned int mOffsetid;
    long long scene;
}

- (id)init;
- (id)init:(long long)a0;
- (void)dealloc;
- (void)destroybuffers;
- (unsigned int)complieshader:(const char *)a0 strlen:(int)a1 type:(unsigned int)a2;
- (BOOL)compileshaders;
- (void)updatebuffer:(int)a0 height:(int)a1;
- (void)setupVBOs;
- (void)process:(unsigned int)a0 width:(int)a1 height:(int)a2;
- (unsigned int)getTex:(int)a0;

@end
