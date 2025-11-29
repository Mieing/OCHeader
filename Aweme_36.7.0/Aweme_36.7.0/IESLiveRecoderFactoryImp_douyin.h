@class NSString;

@interface IESLiveRecoderFactoryImp_douyin : NSObject <IESLiveRecoderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createIESLiveRecoderForFastStartLive;
- (id)createIESLiveRecoderWithVERecorderProtocol:(id)a0;
- (id)recoderWithPreview:(id)a0 config:(struct { struct CGSize { double x0; double x1; } x0; unsigned long long x1; long long x2; })a1 source:(long long)a2;
- (id)createIESLiveRecoderForMultiDeviceLive;
- (long long)currentCaptureOrientation;

@end
