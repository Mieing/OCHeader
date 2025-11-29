@class NSString;
@protocol AWEPostPageElementCenter;

@interface AWEPostPageLayoutElement : AWEPostPageElement <AWENewPublishImageAlbumTableViewCellActionDelegate>

@property (weak, nonatomic) id<AWEPostPageElementCenter> elementCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;
+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (id)poiInfo;
- (id)listService;
- (id)poiService;
- (void)bindServices:(id)a0;
- (id)aACCMidVideoCreationProtocol;
- (id)repoContextInfo;
- (void)imageAlbumCell:(id)a0 willBeginDraggingItemAtIndex:(long long)a1;
- (void)inputController:(id)a0 navigationButtonState:(BOOL)a1;
- (void)p_configVC;
- (void)p_setupInput;
- (id)inputElement;
- (id)tagRecommendCell;
- (id)poiElement;
- (BOOL)hasElementBetweenTagAndPoiElement;
- (id)navigationElement;
- (void).cxx_destruct;
- (id)footerView;
- (id)tableView;
- (long long)priority;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
