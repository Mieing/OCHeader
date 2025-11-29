@class FinderJumpInfo;

@interface FinderLiveSyncAudiencePromotionInfoResp : WXPBGeneratedMessage

@property (nonatomic) unsigned long long joinAudienceNumber;
@property (nonatomic) unsigned int promoteStatus;
@property (retain, nonatomic) FinderJumpInfo *promotePanelLiteappInfo;
@property (nonatomic) unsigned int panelShowTime;

+ (void)initialize;

@end
