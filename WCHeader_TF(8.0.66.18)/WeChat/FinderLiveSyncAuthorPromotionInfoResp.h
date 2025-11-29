@class FinderJumpInfo;

@interface FinderLiveSyncAuthorPromotionInfoResp : WXPBGeneratedMessage

@property (nonatomic) unsigned int promoteStatus;
@property (retain, nonatomic) FinderJumpInfo *promotePanelLiteappInfo;
@property (nonatomic) unsigned int panelShowTime;

+ (void)initialize;

@end
