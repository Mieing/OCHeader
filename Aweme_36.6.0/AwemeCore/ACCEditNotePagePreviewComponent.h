@class NSString;
@protocol ACCStickerServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditViewStateProtocol;

@interface ACCEditNotePagePreviewComponent : ACCFeatureComponent <ACCEditViewHolderComponentProtocol, ACCStickerServiceSubscriber>

@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (retain, nonatomic) id<ACCEditViewStateProtocol> viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initialViewStateWithContext:(id)a0;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)stickerServiceConfigOtherViewAlpha:(double)a0;
- (BOOL)enable;
- (void).cxx_destruct;

@end
