@class AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol, IESServiceProvider;

@interface ACCMultiTrackEditViewModel : NSObject

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;

+ (BOOL)enableMultiTrackWithPublishViewModel:(id)a0;

- (BOOL)enableMultiTrack;
- (void)bindViewModel;
- (void)handleDuetLayoutMultiTrackAndRender;
- (void).cxx_destruct;
- (void)dealloc;

@end
