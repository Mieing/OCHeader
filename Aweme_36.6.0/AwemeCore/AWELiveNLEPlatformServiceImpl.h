@class NLETrack_OC, NLEInterface_OC, NSDictionary, NSString, NLESegmentComposerFilter_OC, UIView;

@interface AWELiveNLEPlatformServiceImpl : NSObject <VEEffectMessageReceiver, IESLiveNLEPlatformService>

@property (retain, nonatomic) UIView *emojiCreateView;
@property (retain, nonatomic) NLEInterface_OC *nleInterface;
@property (retain, nonatomic) NLESegmentComposerFilter_OC *composerSegment;
@property (retain, nonatomic) NLETrack_OC *effectTrack;
@property (retain, nonatomic) NSDictionary *imageInfoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageCenter:(id)a0 didReceiveMessage:(id)a1;
- (long long)p_colorToInteger:(id)a0;
- (void)creatNleInterfaceWithView:(id)a0 imagePath:(id)a1 effectFilePath:(id)a2 typeId:(id)a3;
- (void)makeNleModelWithImagePath:(id)a0 typeId:(id)a1 content:(id)a2;
- (void)getSourcePreviewImageWithCompletion:(id /* block */)a0;
- (void)removeInterfaceObjects;
- (void).cxx_destruct;

@end
