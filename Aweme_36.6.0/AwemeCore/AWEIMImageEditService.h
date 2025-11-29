@class AWEStudioRepoIMModel, AWEIMMessage, AWEIMEditedAssetModel, UIImage, NSString, AWEStudioIMEditSourceModel;

@interface AWEIMImageEditService : NSObject <IESIMActionSheetDelegate>

@property (retain, nonatomic) UIImage *originImage;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEStudioRepoIMModel *imModel;
@property (retain, nonatomic) AWEIMEditedAssetModel *editedModel;
@property (retain, nonatomic) NSString *resultPath;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEStudioIMEditSourceModel *sourceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)pushMediaEditorViewControllerWithImage:(id)a0 message:(id)a1 enterFrom:(id)a2;
- (id)p_imModel;
- (id)p_sourceModelForImage:(id)a0 message:(id)a1;
- (void)onReceiveEditedMediaWithPath:(id)a0 userInfo:(id)a1;
- (void)p_updateEditModelConvertToVideoWithPath:(id)a0 editModel:(id)a1;
- (void)onImageEditorShareToCurrentChat:(id)a0;
- (void)dismissImageEditor;
- (void)onImageEditorShareToFriends:(id)a0;
- (id)getLocalAssetWithEditModel:(id)a0;
- (void)sendMessageWithConversationId:(id)a0 localAsset:(id)a1;
- (void)shareEditImageToFriendWithLocalAsset:(id)a0;
- (void).cxx_destruct;

@end
