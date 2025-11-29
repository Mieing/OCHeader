@class UIImageView, NSString, EditImageForwardAndEditLogicController;

@interface MMImageActionEditItem : MMImageActionSheetItem <EditImageForwardAndEditLogicDelegate>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) EditImageForwardAndEditLogicController *logicController;
@property (copy, nonatomic) id /* block */ onShowEditView;
@property (copy, nonatomic) id /* block */ onHideEditView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleWithImage;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (void)onForwardMessageSendOKInEditView;
- (void)onAddFavoritesSuccessInEditView;
- (void)onSaveImageBeginInEditView;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void).cxx_destruct;

@end
