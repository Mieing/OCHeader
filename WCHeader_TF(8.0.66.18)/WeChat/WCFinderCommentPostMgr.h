@class NSMutableArray, NSMutableDictionary;
@protocol WCFinderCommentPostMgrDelegate;

@interface WCFinderCommentPostMgr : NSObject

@property (weak, nonatomic) id<WCFinderCommentPostMgrDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *commentQueue;
@property (retain, nonatomic) NSMutableDictionary *commentPostingQueue;

- (id)initWithDelegate:(id)a0;
- (void)checkQueue;
- (void)syncQueueToLocal;
- (void)commentPostSuccessfulWithComment:(id)a0;
- (void)commentPostNeedRePostWithComment:(id)a0;
- (void)commentPostShouldnotRePostWithComment:(id)a0;
- (void)addPostComment:(id)a0;
- (void).cxx_destruct;

@end
