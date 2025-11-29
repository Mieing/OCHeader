@class NSString, AWEVideoPublishViewModel;
@protocol ACCEditTextReaderServiceProtocol, ACCEditServiceProtocol, IESServiceProvider;

@interface ACCTrimCropSlidesAudioServiceImpl : NSObject <ACCTrimEditAudioServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *workspace;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditTextReaderServiceProtocol> editTextReaderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBGMClipRange;
- (void)updateTextReadAudioClipRange;
- (void)syncTextReadData;
- (void)updateAudioClipRange;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
