@class NSString, AWEVideoNewPublishTagRecommendTableViewCell;

@interface AWEPostPageTagRecommendElement : AWEPostPageCellElement <AWEVideoNewPublishTagRecommendTableViewCellDelegate>

@property (retain, nonatomic) AWEVideoNewPublishTagRecommendTableViewCell *tagRecommendTableViewCell;
@property (nonatomic) BOOL didAppearFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;
+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (id)aACCMidVideoCreationProtocol;
- (void)setupCell:(id)a0;
- (void)p_addRecommendTagObserver;
- (void)p_trackSelectHashtag:(id)a0 rank:(long long)a1;
- (void)p_addHashTagAndHotSpotWithModel:(id)a0;
- (void)updateAutoRecommendTags;
- (void)AWEVideoNewPublishTagRecommendTableViewCell:(id)a0 didClickedHashTag:(id)a1 indexPath:(id)a2;
- (id)AWEVideoNewPublishTagRecommendTableViewCellContextLogPrams:(id)a0;
- (void)hashtagButtonDidClicked;
- (void)atButtonDidClicked;
- (void).cxx_destruct;
- (id)service;
- (BOOL)isVisible;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)cell;
- (id)nearby;
- (id)challengeService;

@end
