@class UIViewController, WCFinderFeedDraft, WCFinderPostSessionModel;
@protocol WCFinderPostViewControllerDelegate;

@interface WCFinderPostViewControllerOpenParams : NSObject

@property (retain, nonatomic) WCFinderPostSessionModel *postSession;
@property (retain, nonatomic) WCFinderFeedDraft *draft;
@property (retain, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) id<WCFinderPostViewControllerDelegate> delegate;
@property (nonatomic) BOOL presentAnimated;

- (void).cxx_destruct;

@end
