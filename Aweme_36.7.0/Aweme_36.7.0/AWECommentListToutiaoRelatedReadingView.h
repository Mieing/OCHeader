@class NSString, UIImageView, AWEAwemeModel, UILabel, AWEToutiaoReadingBarModel, UITapGestureRecognizer;

@interface AWECommentListToutiaoRelatedReadingView : UIView <AWECommentListCustomExtraViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEToutiaoReadingBarModel *readingBarModel;
@property (retain, nonatomic) UIImageView *readingIcon;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *articleLabel;
@property (nonatomic) BOOL shouldShowIcon;
@property (retain, nonatomic) NSString *realGuidePattern;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (nonatomic) BOOL isBGColorWhite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isToutiaoInstalled;
+ (BOOL)isToutiaoLiteInstalled;
+ (id)currentAppName;
+ (id)reconstructOpenUrlString:(id)a0 withExtraParams:(id)a1;
+ (id)extraParamsFromOpenUrlString:(id)a0;
+ (id)separateGroupIDFromSchema:(id)a0;
+ (id)appendExtraParams:(id)a0 toUrlString:(id)a1;
+ (BOOL)shouldShowCommentToutiaoReadingView:(id)a0;

- (double)customViewHeightInCommentListHeader;
- (void)handleTapArticleLabel;
- (void)p_trackRelatedReadingBarShow;
- (BOOL)canOpenToutiaoApp;
- (void)tryOpenAppWithURL:(id)a0;
- (void)tryOpenMpWithScheme:(id)a0;
- (void)p_trackRelatedReadingBarClick;
- (void)trackClickWithZlink;
- (id)realGuidePattern:(BOOL)a0;
- (void)openToutiaoApp;
- (void)p_trackOpenAppDialogConfirm;
- (void)p_trackOpenAppDialogHideWithType:(long long)a0;
- (void)p_trackOpenAppDialogCancel;
- (void)p_trackOpenAppDialogShow;
- (id)mpGuidePattern;
- (id)relatedReadingParams;
- (id)abParams;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)_setupUI;

@end
