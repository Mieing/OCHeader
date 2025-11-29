@class NSString;
@protocol IESLiveCommonCastScreenStreamStrategy;

@interface IESLiveCommonCastScreenStreamHandler : NSObject <IESLiveCommonCastScreenStreamService>

@property (retain, nonatomic) id<IESLiveCommonCastScreenStreamStrategy> strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)resumeScreenCastWithFirstFrame:(struct __CVBuffer { } *)a0;
- (id)initWithBusiness:(id)a0 room:(id)a1;
- (void)setupCastContext;
- (void)resetCastContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })castScreenStreamLayoutWithHostLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAnchorPreviewLayout;
- (void)updateRTCInfoWithOpenContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)setupBackgroundImage:(id)a0;
- (void)updateAnchorScreenStatus:(long long)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;

@end
