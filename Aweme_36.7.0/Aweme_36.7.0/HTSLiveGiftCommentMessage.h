@class HTSLiveGiftCommentGuideTextAuditContent, HTSLiveGiftCommentWallContent, HTSLiveCommon, HTSLiveGiftCommentAuditContent, HTSLiveGiftCommentMetaContent, HTSLiveGiftCommentCommentListContent, HTSLiveGiftCommentGuideTextShowContent;

@interface HTSLiveGiftCommentMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveGiftCommentMetaContent *metaContent;
@property (retain, nonatomic) HTSLiveGiftCommentWallContent *wallContent;
@property (retain, nonatomic) HTSLiveGiftCommentAuditContent *auditContent;
@property (retain, nonatomic) HTSLiveGiftCommentCommentListContent *commentListContent;
@property (retain, nonatomic) HTSLiveGiftCommentGuideTextShowContent *guideTextShowContent;
@property (retain, nonatomic) HTSLiveGiftCommentGuideTextAuditContent *guideTextAuditContent;

+ (id)descriptor;

@end
