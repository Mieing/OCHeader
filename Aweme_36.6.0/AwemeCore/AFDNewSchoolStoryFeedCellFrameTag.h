@class UIFont, AWEAwemeModel;

@interface AFDNewSchoolStoryFeedCellFrameTag : NSObject

@property (nonatomic) long long currentTagType;
@property (nonatomic) BOOL shouldShowPOIEntrance;
@property (nonatomic) BOOL isFromSearch;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } arrowFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lineFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } ironManFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tagFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } poiFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } platformFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shoppingCartBtnFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stickerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mvFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } goodsSeedingFrame;
@property (retain, nonatomic) UIFont *markButtonsFont;
@property (retain, nonatomic) AWEAwemeModel *aweme;

- (BOOL)shouldShowShoppingEntrance;
- (BOOL)isUseNativeAnchor;
- (BOOL)shouldShowPoiButton;
- (BOOL)shouldShowIronManButton;
- (BOOL)shouldShowStickerButton;
- (BOOL)shouldShowMvButton;
- (BOOL)shouldShowPlatfromButton;
- (BOOL)shouldShowTagView;
- (void)configFrameWithAweme:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3;
- (void)configFrameWithAweme:(id)a0 containerWidth:(double)a1 leftMargin:(double)a2 rightMargin:(double)a3 showPOIEntrance:(BOOL)a4;
- (void)setTagFrameWidth:(double)a0;
- (long long)getCurrentModernFeedTagType;
- (double)feedTagHeight;
- (BOOL)canShowIronManButton;
- (BOOL)canShowShoppingEntrance;
- (BOOL)canShowPlatfromButton;
- (BOOL)canShowStickerButton;
- (BOOL)canShowMvButton;
- (BOOL)canShowGoodsSeedingEntrance;
- (void).cxx_destruct;
- (id)init;

@end
