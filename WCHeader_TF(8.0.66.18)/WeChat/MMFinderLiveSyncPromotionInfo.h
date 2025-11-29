@class WCFinderJumpInfo, FinderJumpInfo;

@interface MMFinderLiveSyncPromotionInfo : NSObject

@property (nonatomic) BOOL isAudience;
@property (nonatomic) unsigned long long joinAudienceNumber;
@property (nonatomic) unsigned int promoteStatus;
@property (retain, nonatomic) WCFinderJumpInfo *promotePanelInfo;
@property (retain, nonatomic) FinderJumpInfo *oriPromotePanelInfo;
@property (nonatomic) unsigned int panelShowTime;

- (id)initWithAudiencePromotionInfoResp:(id)a0;
- (id)initWithAuthorPromotionInfoResp:(id)a0;
- (void)copyFromAudiencePromotionInfoResp:(id)a0;
- (void)copyFromAuthorPromotionInfoResp:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
