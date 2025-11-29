@class NSString;
@protocol MMMusicLiveCommentLikeOperationHandler;

@interface MMMusicLiveCommentCommonViewModel : MMMusicLiveCommentBaseViewModel

@property (weak, nonatomic) id<MMMusicLiveCommentLikeOperationHandler> likeHandler;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) BOOL isLiked;
@property (copy, nonatomic) id /* block */ likeOperationHandler;
@property (retain, nonatomic) NSString *mvPublisherName;

- (id)initWithMsg:(id)a0;
- (void).cxx_destruct;

@end
