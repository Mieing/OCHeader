@class NSString, AWEAdFeedCommentViewController, AWEAwemeModel;

@interface AWEAdCommentSheetViewController : AWEAdCommentBaseViewController <AWEAdCommentSheetViewController> {
    AWEAdFeedCommentViewController *_commentViewController;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showOnViewController:(id)a0 awemeModel:(id)a1;
+ (void)showOnViewController:(id)a0 awemeModel:(id)a1 preloadVC:(id)a2;
+ (id)preloadAdCommentSheetViewControllerWithModel:(id)a0;

- (id)initWithAweme:(id)a0;
- (id)commentViewController;
- (void)setCommentViewController:(id)a0;
- (void)configViews;
- (void)onAWEUIThemeChangeNotification;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
