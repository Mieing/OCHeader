@class IESLiveCommentEntryDanamkuSwitchView, IESLiveCommentSettingView, NSString;

@interface IESLiveCommentEntryDanmakuEntranceView : IESLiveCommentEntryBaseView <IESLiveMessageInteractionModuleDanmakuAction>

@property (retain, nonatomic) IESLiveCommentEntryDanamkuSwitchView *danmakuSwitchView;
@property (retain, nonatomic) IESLiveCommentSettingView *danmakuSettingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didSetEnableNormalDanmuku:(BOOL)a0;
- (void)setupInnerButton;
- (void)relayoutBgImageViewWithImage:(id)a0;
- (id)fetchEntryTitle;
- (id)entryViewType;
- (void)commentEntryUpdate;
- (void)commentEntryDidMount;
- (void)setupDanmakuSwitchBtn;
- (void)setupDanmakuSettingBtn;
- (void)danmakuButtonDidSwitched:(BOOL)a0 animation:(BOOL)a1;
- (void)sendDanmakuEnableStatus:(BOOL)a0;
- (void)trackLandscapeDanmakuEntryClickShow:(BOOL)a0;
- (void)trackCommentSettingClick;
- (double)expandButtonAlphaOnShow:(BOOL)a0;
- (void)danmakuButtonDidSwitched:(BOOL)a0;
- (void)trackCommentSettingShow;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)resetViews;

@end
