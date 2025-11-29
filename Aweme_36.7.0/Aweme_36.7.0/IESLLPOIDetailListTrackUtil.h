@class NSString, LLDitoPageModel, LLDitoGeneralContainerPageContext;
@protocol IESLLPOIDetailListUtilProtocol;

@interface IESLLPOIDetailListTrackUtil : NSObject <IESLLPOIDetailListTrackUtilProtocol>

@property (weak, nonatomic) LLDitoPageModel *pageModel;
@property (nonatomic) BOOL didTrackFirstFeed;
@property (nonatomic) long long totalCommentShowCount;
@property (nonatomic) long long goodCommentShowCnt;
@property (nonatomic) long long badCommentShowCnt;
@property (nonatomic) long long picCommentShowCnt;
@property (nonatomic) long long richTextCommentShowCnt;
@property (nonatomic) long long detailedCommentShowCnt;
@property (weak, nonatomic) LLDitoGeneralContainerPageContext *context;
@property (nonatomic) BOOL isFromIsolated;
@property (weak, nonatomic) id<IESLLPOIDetailListUtilProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (void)firstFeedDidFinishWithPOILogParams:(id)a0;
- (BOOL)hasCOIList;
- (void)forEachWithGroupTagName:(id)a0 block:(id /* block */)a1;
- (id)createFirstFeedLogParams;
- (id)poiSessionCommonParams;
- (void).cxx_destruct;

@end
