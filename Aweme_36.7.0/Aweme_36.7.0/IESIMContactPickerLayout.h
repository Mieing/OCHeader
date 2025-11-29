@class UIColor, UIImage, NSString;
@protocol IESIMContactPickerLayoutUpdateDelegate;

@interface IESIMContactPickerLayout : NSObject <IESIMContactPickerLayoutProtocol>

@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIColor *containerLightColor;
@property (retain, nonatomic) UIColor *containerDarkColor;
@property (retain, nonatomic) UIColor *containerColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double searchViewHeight;
@property (retain, nonatomic) UIImage *searchBarImage;
@property (nonatomic) BOOL useSearchFlexibleHeight;
@property (nonatomic) BOOL searchViewKeepCancelButton;
@property (nonatomic) long long searchViewStyle;
@property (nonatomic) BOOL enableElongateHeightWhileSearch;
@property (nonatomic) double panelHeightVersion2;
@property (nonatomic) BOOL enableSearchEmptyPageIcon;
@property (nonatomic) BOOL enableEmptyPageIcon;
@property (nonatomic) BOOL confirmKeepConfirmButton;
@property (nonatomic) double contentCornerRadius;
@property (nonatomic) double contentTopAndBottomPadding;
@property (weak, nonatomic) id<IESIMContactPickerLayoutUpdateDelegate> updateUIDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (id)contentViewBackgroundColor;
- (double)topContainerTopPadding;
- (double)topContainerSidePadding;
- (double)contentSidePadding;
- (double)bottomContainerSidePadding;
- (BOOL)customLayoutForContentSection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetForContentSection;
- (double)hightForContentSectionHeader;
- (double)sectionTopInset;
- (BOOL)isContentSectionBottomEqualToBottomTop;
- (double)searchContainerHeight;
- (double)searchContainerCornerRadius;
- (unsigned long long)searchContainerCorners;
- (BOOL)searchContainerNeedBottomLine;
- (id)searchContainerColor;
- (id)searchBarPlaceHolderColor;
- (id)searchBarCancelTitleColor;
- (double)searchTextPadding;
- (struct CGPoint { double x0; double x1; })searchViewCenterOffset;
- (double)searchViewSidePadding;
- (BOOL)disableEmptyPage;
- (id)confirmDisableBackgroundColor;
- (id)confirmDisableTextColor;
- (void).cxx_destruct;
- (id)init;
- (id)searchBarBackgroundColor;

@end
