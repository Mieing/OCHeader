@class AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, AWEPublishEditServiceManagerProtocol, ACCEditPreviewProtocol, ACCEditServiceProtocol;

@interface AWEEditServiceFlowHandle : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (readonly, nonatomic) id<ACCEditPreviewProtocol> preview;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (nonatomic) struct CGSize { double width; double height; } backupCanvasSize;

- (struct CGSize { double x0; double x1; })coverSize;
- (BOOL)p_hadApplyCanvas;
- (void)restoreBackupCanvas:(id /* block */)a0;
- (id)initWithModel:(id)a0 editService:(id)a1 sequenceEditService:(id)a2 editServiceManager:(id)a3;
- (void)updateSequenceEditService:(id)a0;
- (void)getCoverImageWithCompletion:(id /* block */)a0;
- (void)getFirstFrameImageWithCompletion:(id /* block */)a0;
- (void)recoverPrevewEdgeWithTaskFlowType:(unsigned long long)a0;
- (void)updateCanvasForPublish:(id /* block */)a0;
- (void)activeCurrentNLEWithCompletion:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })albumCoverSizeWithIndex:(long long)a0;
- (BOOL)horizontalVideo;
- (void).cxx_destruct;

@end
