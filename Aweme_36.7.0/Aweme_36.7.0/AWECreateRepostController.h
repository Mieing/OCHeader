@class AWEAwemeModel, NSString, NSArray, UIView, NSDictionary, MASConstraint, AWECommentModel, UIViewController;

@interface AWECreateRepostController : NSObject <AWECreateRepostControllerProtocol>

@property (retain, nonatomic) UIView *searchContainerView;
@property (retain, nonatomic) NSArray *commentSearchShowConstraints;
@property (retain, nonatomic) MASConstraint *commentSearchHide;
@property (weak, nonatomic) UIViewController *topVCDuringPureMode;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (copy, nonatomic) AWECommentModel *repostComment;
@property (copy, nonatomic) AWECommentModel *replyComment;
@property (copy, nonatomic) AWECommentModel *replySubComment;
@property (weak, nonatomic) id notificationObject;
@property (copy, nonatomic) id /* block */ createCompletion;
@property (copy, nonatomic) id /* block */ sendRepostBlock;
@property (copy, nonatomic) NSString *fakeCommentID;
@property (copy, nonatomic) id /* block */ needHideToastBlock;
@property (retain, nonatomic) NSDictionary *logDict;
@property (nonatomic) double enterTextStartTimestamp;
@property (nonatomic) BOOL isShowingRepost;
@property (nonatomic) BOOL isShowingSearchVC;
@property (readonly, nonatomic) BOOL isInputing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)awemeModel;
- (void)setPureMode:(BOOL)a0;
- (id)referString;
- (void)exitInputView;
- (void)triggleExitInputMode;
- (void)createRepostWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)containerView;

@end
