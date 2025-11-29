@class NSString, BizImagePreviewActionIdentity, BizImagePreviewActionSrcCommentInfo, BizImagePreviewActionPraiseInfo, BizImagePreviewActionReplyInfo;

@interface BizImagePreviewAction : NSObject

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *resp;
@property (retain, nonatomic) BizImagePreviewActionIdentity *identity;
@property (retain, nonatomic) BizImagePreviewActionSrcCommentInfo *srcCommentInfo;
@property (retain, nonatomic) BizImagePreviewActionPraiseInfo *praiseInfo;
@property (retain, nonatomic) BizImagePreviewActionReplyInfo *replyInfo;

+ (id)makeWithAction:(id)a0 resp:(id)a1 identity:(id)a2 srcCommentInfo:(id)a3 praiseInfo:(id)a4 replyInfo:(id)a5;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
