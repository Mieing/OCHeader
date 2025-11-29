@class UIStackView, NSArray, NSString, AWEAwemeModel, UILabel;
@protocol AWEIMQuickReplyControllerHandlerPortocol;

@interface AFDMentionFeedIMBottomBarView : UIView <AFDMentionFeedBottomBarViewProtocol>

@property (retain, nonatomic) UILabel *mentionLabel;
@property (retain, nonatomic) UIStackView *rightButtonsContainer;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEIMQuickReplyControllerHandlerPortocol> imQuickReplyHandler;
@property (retain, nonatomic) NSArray *showingEmoticons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAweme:(id)a0;
- (void)p_updateEmoticons:(id)a0;
- (void)p_clearStackView:(id)a0;
- (void)didTapEmoticonButton:(id)a0;
- (BOOL)p_isDeletedComment;
- (void)mentionFeedBarViewClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
