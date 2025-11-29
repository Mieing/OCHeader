@protocol AWECommentViewControllerInputViewSettingProtocol, AWECommentListViewControllerMediaSettingProtocol, AWECommentViewControllerContentSettingProtocol, AWECommentViewControllerTabSettingProtocol, AWECommentViewControllerPanelContainerSettingProtocol;

@interface AWECommentPanelContainerSwiftImpl.CommentPanelViewControllerSettingModel : NSObject <AWECommentListViewControllerSettingProtocol>

@property (nonatomic, retain) id<AWECommentViewControllerPanelContainerSettingProtocol> panelContainer;
@property (nonatomic, retain) id<AWECommentViewControllerTabSettingProtocol> tab;
@property (nonatomic, retain) id<AWECommentViewControllerInputViewSettingProtocol> input;
@property (nonatomic, retain) id<AWECommentViewControllerContentSettingProtocol> coreContent;
@property (nonatomic, retain) id<AWECommentListViewControllerMediaSettingProtocol> media;

- (void).cxx_destruct;
- (id)init;

@end
