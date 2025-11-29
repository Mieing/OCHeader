@class glVideoBlur, glUSM3Fusion;

@interface glVideoSharpen : NSObject {
    glVideoBlur *mBlurFilter;
    glUSM3Fusion *mUSM3FusionFilter;
    int mInputFormat;
    int mSharpenMode;
    long long mSharpenScene;
    int mrate;
}

- (id)init:(int)a0 scene:(long long)a1;
- (void)dealloc;
- (void)destroybuffers;
- (void)updatebuffer:(int)a0 height:(int)a1;
- (void)setrate:(int)a0;
- (unsigned int)process:(unsigned int)a0 width:(int)a1 height:(int)a2 mode:(long long)a3;
- (unsigned int)process:(unsigned int)a0 width:(int)a1 height:(int)a2 mode:(long long)a3 sharpenratio:(float)a4;
- (void).cxx_destruct;

@end
