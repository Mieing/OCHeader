@class HTSLiveToolbarItemConfig, NSString, HTSLiveToolbarItem, UIImage, UIButton;
@protocol IESLiveCommonAbilityModuleVSMessageBoardInterface;

@interface IESLivePlaybackMessageBoardFragment : IESLivePlaybackComponent <IESLivePlaybackChangeStreamAction>

@property (retain, nonatomic) HTSLiveToolbarItemConfig *toolbarConfig;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) UIImage *toolbarImage;
@property (retain, nonatomic) UIButton *messageBoardBtn;
@property (nonatomic) BOOL hasShowItem;
@property (nonatomic) BOOL hasShowLandscapeBtn;
@property (retain, nonatomic) id<IESLiveCommonAbilityModuleVSMessageBoardInterface> boardInterface;
@property (copy, nonatomic) NSString *schemaCommentId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentWillUnmount;
- (id)createToolbarItem;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (void)insertToolbarIfNeeded;
- (void)initToolbar;
- (void)openMessageBoard;
- (void)openMessageBoardReply:(BOOL)a0;
- (void)showMessageBoard;
- (void)insertLandScapeEntrance;
- (void)updateMessageBoardBtn;
- (void).cxx_destruct;

@end
