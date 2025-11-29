@class NSString;
@protocol ACCSlidesBeatsServiceProtocol, ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider, ACCTrimCropEditorFlagProtocol, ACCTrimBeatEditServiceDelegate;

@interface ACCTrimSlidesBeatEditService : NSObject <ACCEditBeatsServiceSubscriber, ACCTrimBeatEditServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSlidesBeatsServiceProtocol> slidesBeatsService;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (copy, nonatomic) id /* block */ switchBeatsStateCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCTrimBeatEditServiceDelegate> delegate;
@property (nonatomic) BOOL isMusicBeatOn;

- (void)enableAIBeatEditWithCompletion:(id /* block */)a0;
- (void)disableAIBeatEditWithCompletion:(id /* block */)a0;
- (void)updateAIBeatStateByTrim;
- (void)slidesMusicBeatsStateDidChanged:(BOOL)a0;
- (void)unBindSlidesBeatsState;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)initData;

@end
