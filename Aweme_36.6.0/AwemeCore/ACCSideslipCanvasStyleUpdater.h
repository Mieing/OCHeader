@class AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol;

@interface ACCSideslipCanvasStyleUpdater : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) BOOL didSetEffectCanvasStyle;

- (void)addNLECanvasStyleIfNeeded:(BOOL)a0;
- (id)initWithRepository:(id)a0 editService:(id)a1;
- (void)addNLECanvasStyleIfNeeded;
- (void).cxx_destruct;

@end
