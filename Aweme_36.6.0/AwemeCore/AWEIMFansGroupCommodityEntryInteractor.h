@class AWEIMMessageBaseViewController, NSString;

@interface AWEIMFansGroupCommodityEntryInteractor : AWEIMComponentBase <AWEIMFansGroupCommodityEntryInteractorInterface>

@property (readonly, nonatomic) AWEIMMessageBaseViewController *vcParent;
@property (nonatomic) long long entryState;
@property (nonatomic) BOOL hasShowBubble;
@property (copy, nonatomic) NSString *unavailableToast;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL hasResolved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFansCommodityWithCon:(id)a0;
+ (BOOL)tryShowCommodityGuideBubbleWithCon:(id)a0 anchorView:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)onTapInputPanelEntry;
- (BOOL)canShowCommodityEntry;
- (BOOL)canShowCommodityEntryInActionBar;
- (void).cxx_destruct;

@end
