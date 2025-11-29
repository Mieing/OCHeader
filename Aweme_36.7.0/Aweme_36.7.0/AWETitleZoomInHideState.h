@class NSString, AWEPublishTitleInputController;

@interface AWETitleZoomInHideState : NSObject <AWETitleInputZoomStateProtocol>

@property (readonly, nonatomic) unsigned long long options;
@property (weak, nonatomic) AWEPublishTitleInputController *control;
@property (nonatomic) BOOL shouldHandleSuggestionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isJXPostPage;
- (BOOL)needPublishVideoTitleExpose;
- (void)handleZoomIn:(id /* block */)a0;
- (void)handleZoomOut:(id /* block */)a0;
- (void)handleAdditionViewHide:(id /* block */)a0;
- (void)handleAdditionViewShow:(id /* block */)a0;
- (BOOL)isNewPreviewLayoutStyle;
- (void)handleNewVideoZoomInNewPreviewLayoutVersion:(id /* block */)a0;
- (void)handleNewVideoZoomInOldVersion:(id /* block */)a0;
- (void)handleNewVideoZoomIn:(id /* block */)a0;
- (void)handleZoomInNewPreviewLayoutVersion:(id /* block */)a0;
- (void)handleZoomInOldVersion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;

@end
