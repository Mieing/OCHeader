@interface AFDStoryPlayInteractionTrackingManager : NSObject

+ (void)trackLikeUserTagShowWithModel:(id)a0 referString:(id)a1;
+ (void)trackLikeUserTagClickWithModel:(id)a0 referString:(id)a1;
+ (id)likeUserTagParamsWithModel:(id)a0 referString:(id)a1;
+ (void)trackShowCommentPanelWithModel:(id)a0 referString:(id)a1;
+ (id)commentParamsWithModel:(id)a0 referString:(id)a1;
+ (void)trackCommentBulletShowWithModel:(id)a0 referString:(id)a1;
+ (void)trackCommentBulletClickWithModel:(id)a0 referString:(id)a1;
+ (void)trackCommentBoardShowWithModel:(id)a0 referString:(id)a1;
+ (void)trackCommentBoardClickWithModel:(id)a0 referString:(id)a1;
+ (void)trackCommentBoardMoreButtonClickWithModel:(id)a0 referString:(id)a1;

@end
