@class NSString;
@protocol IESECCommentKOLEvaluationFeedRedirectorDelegate;

@interface IESECCommentKOLEvaluationFeedRedirectorImpl : NSObject <AWEAwemeDetailTableViewControllerDelegate, IESECCommentKOLEvaluationFeedRedirector>

@property (weak, nonatomic) id<IESECCommentKOLEvaluationFeedRedirectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)openVideoFeedWithDataManager:(id)a0 withCurrentIndex:(long long)a1;
- (void).cxx_destruct;

@end
