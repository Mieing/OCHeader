@class NSString, NSArray, UIImage, AWENewPublishAnchorTableViewCell, NSDictionary;

@interface AWEPostPageGeneralAnchorElement : AWEPostPageAnchorCheckCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWENewPublishAnchorTableViewCell *generalViewTableViewCell;
@property (copy, nonatomic) NSString *generalViewEnterFrom;
@property (retain, nonatomic) NSString *positionCoverPath;
@property (retain, nonatomic) UIImage *positionCoverImage;
@property (copy, nonatomic) NSArray *suggestionModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)publishViewModel;
- (id)starAtlas;
- (void)elementAppear;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)setupUIForAnchor;
- (void)setupCell:(id)a0;
- (void)configPlaceholderUI;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)canHandleAnchorType:(long long)a0;
- (id)jsonStringFromDictValues:(id)a0 limit:(unsigned long long)a1;
- (id)mediaTypeForTrack;
- (long long)anchorRequestPublishItemType;
- (id)getDidSelectedTags;
- (id)getSuggestionTags;
- (id)tagRecommendService;
- (void)addAnchorGeneralViewObserver;
- (id)singleGeneralViewPublishModel;
- (void)didClickGeneralViewWithType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)isGeneralAnchorType:(long long)a0;
- (void)updateGeneralViewWithJsonString:(id)a0;
- (void)addGeneralViewAnchorNotification:(id)a0;
- (void)trackGameCPDeleteAnchor;
- (void)configShootPositionCreationData;
- (void)cancelSelectedGeneralView:(id)a0;
- (void)prepareWithType:(long long)a0 completion:(id /* block */)a1;
- (void)trackGameCPClickAnchor:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (id)cell;
- (void)didSelect;

@end
