@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareDislikeChannel : AWEShareBaseChannel <AWEShareFunction, AWESharePanelExtension, AWEShareItemDelegate>

@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) long long shareCategory;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (void)checkTargetIndexWithContext:(id)a0;
- (BOOL)shouldShowFamiliarDislikeWithContext:(id)a0;
- (BOOL)shouldShowRelatedRecommendDislikeWithContext:(id)a0;
- (void)trackRelatedRecommendDislikeClicked:(id)a0;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
