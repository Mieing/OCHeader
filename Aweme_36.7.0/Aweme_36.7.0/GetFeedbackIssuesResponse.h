@class NSString, GetFeedbackIssuesResponse_ResponseData;

@interface GetFeedbackIssuesResponse : IESLivePBBaseMessage <IESLiveRevenueInteractFeedbackListModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GetFeedbackIssuesResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

- (id)issueCategories;
- (id)pkDislikeRivalIssueCategory;
- (id)issues;

@end
