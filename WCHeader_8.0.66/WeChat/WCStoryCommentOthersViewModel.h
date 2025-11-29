@class NSString, WCStoryDataItem, WCStoryPreviewReportObj, NSMutableArray;
@protocol WCStoryCommentOthersViewModelDelegate;

@interface WCStoryCommentOthersViewModel : NSObject <WCStoryFacadeExt>

@property (readonly, copy, nonatomic) NSString *tid;
@property (retain, nonatomic) WCStoryDataItem *dataItem;
@property (retain, nonatomic) NSMutableArray *cellHeights;
@property (retain, nonatomic) WCStoryPreviewReportObj *reportObj;
@property (weak, nonatomic) id<WCStoryCommentOthersViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithTid:(id)a0;

- (id)initWithTid:(id)a0;
- (void)startReceiveDataUpdate;
- (id)comments;
- (BOOL)hasComments;
- (void)makeStoryUserRelatedCommentsAllReaded;
- (void)commitWithText:(id)a0 forReplyComment:(id)a1;
- (void)deleteComment:(id)a0 successFul:(id /* block */)a1 failed:(id /* block */)a2;
- (id)genCellHeightsWithDataItem:(id)a0;
- (void)onDataItemHasUpdate:(id)a0;
- (void)setPreviewReportObj:(id)a0;
- (void).cxx_destruct;

@end
