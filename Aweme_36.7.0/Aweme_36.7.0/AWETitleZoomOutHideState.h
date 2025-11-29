@class NSString, AWEPublishTitleInputController;

@interface AWETitleZoomOutHideState : NSObject <AWETitleInputZoomStateProtocol>

@property (readonly, nonatomic) unsigned long long options;
@property (weak, nonatomic) AWEPublishTitleInputController *control;
@property (nonatomic) BOOL shouldHandleSuggestionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isJXPostPage;
- (void)handleZoomIn:(id /* block */)a0;
- (void)handleZoomOut:(id /* block */)a0;
- (void)handleAdditionViewHide:(id /* block */)a0;
- (void)handleAdditionViewShow:(id /* block */)a0;
- (BOOL)isNewPreviewLayoutStyle;
- (void)handleNewVideoZoomOutNewPreviewLayoutVersion:(id /* block */)a0;
- (void)handleNewVideoZoomOutOldVersion:(id /* block */)a0;
- (void)handleNewVideoZoomOut:(id /* block */)a0;
- (void)handleZoomOutNewPreviewLayoutVersion:(id /* block */)a0;
- (void)handleZoomOutOldVersion:(id /* block */)a0;
- (void)handleAdditionViewShowNewPreviewLayoutVersion:(id /* block */)a0;
- (void)handleAdditionViewShowOldVersion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;

@end
