@class AWECommentMediaFeedParams, AWECommentMediaFeedBasicParams;

@interface AWECommentMediaFeedContext : AWEPageContext

@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) AWECommentMediaFeedBasicParams *basicParams;
@property (readonly, nonatomic) AWECommentMediaFeedParams *mediaFeedParams;

- (id)initWithData:(id)a0 basicParams:(id)a1 mediaFeedParams:(id)a2;
- (void).cxx_destruct;

@end
