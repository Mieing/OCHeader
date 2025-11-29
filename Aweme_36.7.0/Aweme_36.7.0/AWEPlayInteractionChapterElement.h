@class NSString, UILabel, DUXBaseImageView, UIView;

@interface AWEPlayInteractionChapterElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) DUXBaseImageView *chapterIcon;
@property (retain, nonatomic) UILabel *chapterLabel;
@property (retain, nonatomic) DUXBaseImageView *arrowIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)shouldShowChapterEntrance:(id)a0;

- (void)viewController_willDisplay;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)handleClickChapterEntrance:(id)a0;
- (BOOL)enableSmartChapterKeyPoint;
- (void)trackChapterEntranceShow;
- (void)handleShareButtonClicked:(id)a0;
- (void)trackChapterEntranceClick;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
