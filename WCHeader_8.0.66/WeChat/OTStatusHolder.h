@class EAGLContext;

@interface OTStatusHolder : NSObject {
    EAGLContext *currContext;
    int currActiveTexture;
    int currTextureId;
    int currFrameBuffer;
    int currRenderBuffer;
    int currProgram;
    int curVAO;
    int curVBO;
    int curEBO;
    int currArrayBuffer;
    int currElementArrayBuffer;
    int currVertexArray;
    int currViewPort[4];
}

- (void)dealloc;
- (void)join:(id)a0;
- (void)leave;
- (void).cxx_destruct;

@end
