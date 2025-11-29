@class NSString, WCFinderExternalCommentModel, WCFinderFeedContentVM, WCFinderContentVMShareModel, UIViewController;
@protocol WCFinderPostMgrDelegate;

@interface WCFinderOpenCommentRouteModel : NSObject

@property (retain, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) unsigned long long viewScene;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL shouldEnterKeyBoard;
@property (nonatomic) unsigned long long enterType;
@property (nonatomic) unsigned long long refCommentID;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) BOOL showTitle;
@property (nonatomic) BOOL shouldForceHideTitle;
@property (nonatomic) unsigned long long commentStyleType;
@property (nonatomic) BOOL shouldHideLocalCommentList;
@property (nonatomic) BOOL scrollToInVisibleRefCommentAtAppear;
@property (nonatomic) BOOL isStatusBarColorBlack;
@property (retain, nonatomic) WCFinderExternalCommentModel *appendCommentModel;
@property (nonatomic) double halfScreenHeightRatio;
@property (retain, nonatomic) WCFinderContentVMShareModel *shareModel;
@property (nonatomic) BOOL showBackgroundButtonColor;
@property (weak, nonatomic) id<WCFinderPostMgrDelegate> postDelegate;
@property (copy, nonatomic) NSString *providerFinderUsername;
@property (nonatomic) unsigned long long viewerScene;

- (id)initWithFromVC:(id)a0 contentVM:(id)a1 commentScene:(int)a2 shouldEnterKeyBoard:(BOOL)a3 enterType:(unsigned long long)a4;
- (void).cxx_destruct;

@end
