@class NSDictionary, NSString;
@protocol IESIMThreadInterface;

@interface IESIMMenuThreadComponent : AWEIMComponentBase <AWEIMMessageListMenuProtocol, IESIMMenuThreadComponentProtocol>

@property (weak, nonatomic) id<IESIMThreadInterface> threadService;
@property (retain, nonatomic) NSDictionary *abDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)shouldShowRedDotWithMessage:(id)a0 context:(id)a1;
- (BOOL)canShowItemWithMessage:(id)a0 context:(id)a1;
- (id)menuItemTitle:(id)a0 context:(id)a1;
- (id)menuItemImageName:(id)a0 context:(id)a1;
- (id)menuItemLightImageURL:(id)a0 context:(id)a1;
- (id)menuItemDarkImageURL:(id)a0 context:(id)a1;
- (id)menuTrackerName:(id)a0 context:(id)a1;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:(id)a0 context:(id)a1;
- (BOOL)shouldShowRedDotTips:(id)a0 context:(id)a1;
- (id)p_getStorageKey;
- (BOOL)p_abEntranceGuide;
- (BOOL)p_isShouldShowRedDot;
- (void).cxx_destruct;

@end
