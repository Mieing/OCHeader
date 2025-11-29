@class NSString;

@interface CaptureDelegate : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    int newFrame;
    struct __CVBuffer { } *mCurrentImageBuffer;
    char *imagedata;
    struct _IplImage { int x0; int x1; int x2; int x3; int x4; char x5[4]; char x6[4]; int x7; int x8; int x9; int x10; int x11; struct _IplROI *x12; struct _IplImage *x13; void *x14; struct _IplTileInfo *x15; int x16; char *x17; int x18; int x19[4]; int x20[4]; char *x21; } *image;
    char *bgr_imagedata;
    struct _IplImage { int x0; int x1; int x2; int x3; int x4; char x5[4]; char x6[4]; int x7; int x8; int x9; int x10; int x11; struct _IplROI *x12; struct _IplImage *x13; void *x14; struct _IplTileInfo *x15; int x16; char *x17; int x18; int x19[4]; int x20[4]; char *x21; } *bgr_image;
    struct _IplImage { int x0; int x1; int x2; int x3; int x4; char x5[4]; char x6[4]; int x7; int x8; int x9; int x10; int x11; struct _IplROI *x12; struct _IplImage *x13; void *x14; struct _IplTileInfo *x15; int x16; char *x17; int x18; int x19[4]; int x20[4]; char *x21; } *bgr_image_r90;
    unsigned long long currSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (struct _IplImage { int x0; int x1; int x2; int x3; int x4; char x5[4]; char x6[4]; int x7; int x8; int x9; int x10; int x11; struct _IplROI *x12; struct _IplImage *x13; void *x14; struct _IplTileInfo *x15; int x16; char *x17; int x18; int x19[4]; int x20[4]; char *x21; } *)getOutput;
- (int)updateImage;

@end
