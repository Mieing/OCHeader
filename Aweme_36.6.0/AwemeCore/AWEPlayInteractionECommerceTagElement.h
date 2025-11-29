@class UIView, NSString, UIStackView;
@protocol AWEECLabelActionProtocol;

@interface AWEPlayInteractionECommerceTagElement : AWEPlayInteractionLeftElement <AWEFeedTagsPosPriorityAvoidElementProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIStackView *tagsStackView;
@property (weak, nonatomic) UIView<AWEECLabelActionProtocol> *ecommerceTagEntryView;
@property (weak, nonatomic) UIView<AWEECLabelActionProtocol> *ecommerceTagLabelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (void)viewController_willDisplay;
- (void)hideComponent;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (long long)elementPriority;
- (id)goodsTrackObject:(unsigned long long)a0 withType:(long long)a1;
- (void)adClickTrackWithLabel:(id)a0;
- (BOOL)shouldShowFriendsBoughtTagWithVid:(id)a0;
- (void)friendTagShowedWithVid:(id)a0;
- (id)friendTagShowCountKey;
- (long long)frequencyInEcommerceScene:(unsigned long long)a0;
- (id)ecommerceVideoFriendBuyKey:(unsigned long long)a0;
- (id)getViews;
- (void).cxx_destruct;
- (id)businessID;
- (void)viewDidLoad;
- (void)showActionSheet;

@end
