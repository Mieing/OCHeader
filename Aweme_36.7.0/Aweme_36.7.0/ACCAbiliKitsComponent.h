@class NSString;
@protocol ACCStickerServiceProtocol;

@interface ACCAbiliKitsComponent : ACCFeatureComponent <AEKEditMediaGenreInjectService>

@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTextReaderClipWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)syncStickerAndTextReaderTimeline;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidReceiveMemoryWarning:(unsigned long long)a0;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void).cxx_destruct;

@end
