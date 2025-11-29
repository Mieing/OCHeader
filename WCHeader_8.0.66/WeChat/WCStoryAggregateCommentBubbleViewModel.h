@class NSString, WCStoryDataItem, WCStoryPreviewReportObj, NSMutableArray;
@protocol WCStoryAggregateCommentBubbleViewModelDelegate;

@interface WCStoryAggregateCommentBubbleViewModel : NSObject <WCStoryFacadeExt>

@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) WCStoryDataItem *dataItem;
@property (retain, nonatomic) NSMutableArray *commentCellHeights;
@property (nonatomic) unsigned long long listReadState;
@property (retain, nonatomic) WCStoryPreviewReportObj *reportObj;
@property (weak, nonatomic) id<WCStoryAggregateCommentBubbleViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithTid:(id)a0;

- (id)initWithTid:(id)a0;
- (void)markVisitListHasReaded;
- (void)makeVisitListAllReaded;
- (void)makeVisitListUnReaded;
- (BOOL)isVisitListReaded;
- (void)markCommentListHasReaded;
- (void)makeCommentListAllReaded;
- (void)makeCommentListUnReaded;
- (BOOL)isCommentListReaded;
- (id)visitors;
- (id)comments;
- (id)cellHeights;
- (BOOL)hasUnreadComment;
- (BOOL)hasUnreadVisitor;
- (BOOL)isDataItemExpiredOrInvisible;
- (void)commitWithText:(id)a0 forReplyComment:(id)a1;
- (void)deleteComment:(id)a0 successFul:(id /* block */)a1 failed:(id /* block */)a2;
- (void)exposeReportPageType:(unsigned long long)a0;
- (id)genCellHeightsWithDataItem:(id)a0;
- (void)onDataItemHasUpdate:(id)a0;
- (void)onRelatedCommentAdd:(id)a0;
- (void)setPreviewReportObj:(id)a0;
- (void).cxx_destruct;

@end
