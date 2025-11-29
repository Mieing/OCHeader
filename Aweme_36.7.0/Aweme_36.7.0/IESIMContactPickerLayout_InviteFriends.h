@class NSString;
@protocol IESIMContactPickerLayoutUpdateDelegate;

@interface IESIMContactPickerLayout_InviteFriends : NSObject <IESIMContactPickerLayoutProtocol>

@property (weak, nonatomic) id<IESIMContactPickerLayoutUpdateDelegate> updateUIDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (id)contentViewBackgroundColor;
- (id)containerDarkColor;
- (double)topContainerTopPadding;
- (double)topContainerSidePadding;
- (double)contentSidePadding;
- (double)bottomContainerSidePadding;
- (BOOL)customLayoutForContentSection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForContentSection;
- (double)hightForContentSectionHeader;
- (double)sectionTopInset;
- (BOOL)isContentSectionBottomEqualToBottomTop;
- (id)containerLightColor;
- (id)containerColor;
- (double)searchContainerHeight;
- (double)searchContainerCornerRadius;
- (unsigned long long)searchContainerCorners;
- (BOOL)searchContainerNeedBottomLine;
- (id)searchContainerColor;
- (id)searchBarPlaceHolderColor;
- (id)searchBarCancelTitleColor;
- (id)searchBarImage;
- (double)searchTextPadding;
- (struct CGPoint { double x0; double x1; })searchViewCenterOffset;
- (double)searchViewSidePadding;
- (BOOL)searchViewKeepCancelButton;
- (long long)searchViewStyle;
- (double)searchViewHeight;
- (BOOL)enableSearchEmptyPageIcon;
- (BOOL)disableEmptyPage;
- (BOOL)confirmKeepConfirmButton;
- (id)confirmDisableBackgroundColor;
- (id)confirmDisableTextColor;
- (BOOL)searchViewNeedTopLine;
- (void).cxx_destruct;
- (double)contentCornerRadius;
- (id)backgroundColor;
- (id)searchBarBackgroundColor;
- (id)contentBackgroundColor;

@end
