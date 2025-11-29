@class FinderJumpInfo_CardStyle;

@interface FinderJumpInfo_DynamicCardStyleV2 : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo_CardStyle *firstCard;
@property (retain, nonatomic) FinderJumpInfo_CardStyle *secondCard;
@property (nonatomic) unsigned int changeTime;
@property (nonatomic) unsigned int finishChange;

+ (void)initialize;

@end
