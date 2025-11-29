@class NSString, FinderJumpInfo, NSMutableArray;

@interface FinderCommentPromotionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSMutableArray *dislikeReasonList;
@property (retain, nonatomic) FinderJumpInfo *promotionLabelPageJumpInfo;
@property (retain, nonatomic) NSString *promotionLabelName;
@property (retain, nonatomic) NSString *promotionBuffer;
@property (retain, nonatomic) FinderJumpInfo *promotionComplaintJumpInfo;
@property (retain, nonatomic) NSString *promotionId;
@property (retain, nonatomic) FinderJumpInfo *accountJumpInfo;

+ (void)initialize;

@end
