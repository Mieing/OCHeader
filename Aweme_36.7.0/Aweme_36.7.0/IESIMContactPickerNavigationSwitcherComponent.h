@class AWEIMGroupListSortingTitleView, NSString;

@interface IESIMContactPickerNavigationSwitcherComponent : AWEIMComponentBase <AWEIMGroupListSortingTitleViewProtocol, IESIMContactPickerNavigationBarAction>

@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) AWEIMGroupListSortingTitleView *sortingTitleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)onNavigationbarInstall;
- (void)p_updateSortingTitleView;
- (void)sortByTypeAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
