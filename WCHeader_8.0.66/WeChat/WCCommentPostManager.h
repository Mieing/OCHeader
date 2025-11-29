@class NSString, NSMutableArray, NSMutableDictionary;
@protocol WCCommentPostManagerDelegate;

@interface WCCommentPostManager : NSObject

@property (weak, nonatomic) id<WCCommentPostManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *commentQueue;
@property (copy, nonatomic) NSString *queuePath;
@property (copy, nonatomic) NSString *postingCommentPath;
@property (retain, nonatomic) NSMutableDictionary *commentPostingQueue;

- (id)initWithDelegate:(id)a0 queuePath:(id)a1 postingCommentPath:(id)a2;
- (void)checkQueue;
- (void)syncQueueToLocal;
- (void)commentPostSuccessfulWithComment:(id)a0;
- (void)commentPostNeedRePostWithComment:(id)a0;
- (void)commentPostShouldnotRePostWithComment:(id)a0;
- (void)addPostComment:(id)a0;
- (void).cxx_destruct;

@end
