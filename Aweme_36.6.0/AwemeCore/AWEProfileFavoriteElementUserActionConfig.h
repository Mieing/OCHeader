@class NSString, UIView;

@interface AWEProfileFavoriteElementUserActionConfig : NSObject

@property (copy, nonatomic) id /* block */ favoriteBlock;
@property (copy, nonatomic) id /* block */ unfavoriteBlock;
@property (copy, nonatomic) id /* block */ otherActionBlock;
@property (copy, nonatomic) id /* block */ actionFailedBlock;
@property (copy, nonatomic) id /* block */ actionSuccessBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL inFollowFeed;
@property (nonatomic) BOOL forceAFDSnackBar;
@property (nonatomic) BOOL shouldBlockSnackBar;
@property (nonatomic) BOOL shouldIgnoreFavoriteTrack;
@property (nonatomic) double snackBottomPadding;
@property (retain, nonatomic) UIView *a11yDismissView;

- (void).cxx_destruct;

@end
