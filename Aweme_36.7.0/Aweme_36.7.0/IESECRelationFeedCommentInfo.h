@class NSArray, NSString, IESECInnerFlowProductComment, IESECRelationFeedCommentViewModel;

@interface IESECRelationFeedCommentInfo : NSObject <IESECRelationFeedCommentViewDataSource>

@property (retain, nonatomic) IESECRelationFeedCommentViewModel *productCommentsModel;
@property (copy, nonatomic) IESECInnerFlowProductComment *info;
@property (copy, nonatomic) NSArray *comments;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL animate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickComment;
- (id)commentsModel;
- (void).cxx_destruct;

@end
