@class AWEButton, AWELiveInnerPushContentModel, UIView;
@protocol AWELiveUserAvatarPreviewProtocol, AWEFeedLiveMarkViewProtocol;

@interface AWELiveUpdateInnerPushAvatarView : UIView

@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWEButton *avatarButton;
@property (retain, nonatomic) id<AWELiveUserAvatarPreviewProtocol> avatarPreview;
@property (retain, nonatomic) AWELiveInnerPushContentModel *livePushModel;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;

- (void)stopPlay;
- (void)startPlay;
- (BOOL)enablePreview;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (long long)p_generateCustomConfigFromPushModel;
- (void)addLivePlayerPreview;
- (void)updatePushViewWithLivePush:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setUpViews;

@end
