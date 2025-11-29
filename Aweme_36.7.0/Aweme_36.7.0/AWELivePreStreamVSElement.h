@class AWELivingCellControllerApi, NSString, UIView;

@interface AWELivePreStreamVSElement : AWELiveBusinessBaseElement <AWELivePreStreamBusinessCoreDataProtocol>

@property (retain, nonatomic) UIView *vsWatermarkView;
@property (nonatomic) BOOL hadReportPv;
@property (retain, nonatomic) AWELivingCellControllerApi *vsPvApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)preloadElement;
- (id)provideCoreDataForEvent:(long long)a0;
- (void)streamPlayer_firstFrame;
- (void)p_reportPv;
- (void).cxx_destruct;
- (void)setData:(id)a0;

@end
