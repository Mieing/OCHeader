@class IESLiveInteractSubtitleViewModel, IESLiveSubtitleSEIParser, NSArray, IESLiveInteractionLayout, IESLiveInteractSubtitleView, UIView, IESLiveInteractSubtitleConfig;
@protocol IESLiveFeedAudioStageViewProtocol;

@interface IESLiveFeedAudioSubtitleManager : NSObject

@property (weak, nonatomic) UIView<IESLiveFeedAudioStageViewProtocol> *stageView;
@property (retain, nonatomic) IESLiveInteractSubtitleView *subtitleView;
@property (retain, nonatomic) IESLiveInteractSubtitleViewModel *subtitleViewModel;
@property (retain, nonatomic) IESLiveSubtitleSEIParser *subtitleParser;
@property (copy, nonatomic) NSArray *originalSubtitles;
@property (retain, nonatomic) IESLiveInteractSubtitleConfig *subtitleConfig;
@property (copy, nonatomic) NSArray *currentListModel;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (nonatomic) BOOL firstMessageReceived;
@property (nonatomic) BOOL haveNotUpdateUserList;
@property (nonatomic) BOOL useOldSubtitleView;
@property (nonatomic) BOOL isFullScreenPreStreamView;

- (void)configWithListModel:(id)a0;
- (void)smoothExitRoomToPreview;
- (BOOL)isSameSubtitleWithCurrent:(id)a0;
- (id)filterSubtitleIfNeeded:(id)a0;
- (void)sendSubtitleToDynamicContainer:(id)a0;
- (void)smoothEnterRoomFromPreview;
- (id)initWithStageView:(id)a0 layout:(id)a1 useOldStyle:(BOOL)a2 isFullScreenPreStreamView:(BOOL)a3;
- (void)stageWillLoad;
- (void)handleSubtitleSEIParseResult:(id)a0;
- (id)getSubtitleConfigIfNotNil;
- (void)loadSubtitleView:(id)a0;
- (void)onMessageReceivedFromPrestream:(id)a0;
- (id)initWithStageView:(id)a0 layout:(id)a1 useOldStyle:(BOOL)a2;
- (void)showSubtitleViewIfNeeded;
- (void)showSubtitleView;
- (void)updateSubtileStyle:(long long)a0;
- (void).cxx_destruct;

@end
