@protocol IESLiveRoomService;

@interface IESLiveFrequentCommentApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)initWithRoomModel:(id)a0;
- (void)addFrequentCommentWithContent:(id)a0 completion:(id /* block */)a1;
- (void)deleteFrequentCommentWithContentID:(id)a0 callback:(id /* block */)a1;
- (void)updateFrequentCommentWithContentID:(id)a0 content:(id)a1 callback:(id /* block */)a2;
- (void)sortFrequentCommentWithOrder:(id)a0 callback:(id /* block */)a1;
- (void)fetchFrequentCommentsCompletion:(id /* block */)a0;
- (void)fetchRecommendContentsCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
