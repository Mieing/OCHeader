@class WCFinderCommentImageBrowseDataReportParams, NSString, FinderGetCommentListCtx, UIImage, WCFinderDataItem, UIView, WCFinderContact;

@interface WCFinderCommentImageBrowseConfig : NSObject

@property (weak) UIView *startView;
@property (weak) UIImage *startImage;
@property (nonatomic) BOOL notTriggerParentVCLifeCycleFunc;
@property (nonatomic) unsigned long long commentStyleType;
@property (nonatomic) unsigned long long initRefCommentID;
@property (retain) WCFinderDataItem *dataItem;
@property (retain) NSString *enterSessionId;
@property (nonatomic) int viewScene;
@property (nonatomic) int pullScene;
@property (retain) FinderGetCommentListCtx *commentCtx;
@property (nonatomic) unsigned long long sortType;
@property (nonatomic) unsigned long long selectedType;
@property (nonatomic) BOOL isMemberQA;
@property (retain) WCFinderContact *currentFinderContact;
@property (nonatomic) unsigned long long replyScene;
@property (retain) WCFinderCommentImageBrowseDataReportParams *dataReportParams;
@property (copy) id /* block */ getLastBufferRequest;
@property (copy) id /* block */ getRootCommentRequest;
@property (copy) id /* block */ updateIdentityCallback;
@property (copy) id /* block */ exitCallback;

- (void)checkParams;
- (void)fillWithCommentDetailVM:(id)a0;
- (void).cxx_destruct;

@end
