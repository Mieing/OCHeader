@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareDesktopAwemeFunction : NSObject <AWEUGDesktopChannelGuideMessage, AWEShareFunction>

@property (weak, nonatomic) AWEShareContext *context;
@property (nonatomic) long long shareCategory;
@property (nonatomic) BOOL supportMultipleOperations;
@property (weak, nonatomic) id<AWEShareView> shareView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;

- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void)shareWithCompletion:(id /* block */)a0;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)functionWillDisplayWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (id)desktopChannelRequestModel;
- (void).cxx_destruct;
- (id)init;
- (id)title;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
