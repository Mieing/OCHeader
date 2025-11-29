@class FinderJumpInfo, NSMutableArray;

@interface AudienceGetPurchaseMicInfo : WXPBGeneratedMessage

@property (nonatomic) double serviceScore;
@property (retain, nonatomic) FinderJumpInfo *serviceScoreEntrance;
@property (nonatomic) unsigned int purhcaseMicStatus;
@property (nonatomic) BOOL allowMarkup;
@property (retain, nonatomic) NSMutableArray *applyedAudienceList;
@property (nonatomic) unsigned int waitingMicAudience;
@property (nonatomic) BOOL allowAnonymityApplyFeature;
@property (nonatomic) BOOL allowConsultationContentFeature;

+ (void)initialize;

@end
