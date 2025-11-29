@class FinderJumpInfo_CardStyle;

@interface FinderJumpInfo_DynamicCardStyle : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo_CardStyle *smallCard;
@property (retain, nonatomic) FinderJumpInfo_CardStyle *bigCard;
@property (nonatomic) unsigned int changeTime;
@property (nonatomic) unsigned int finishChange;

+ (void)initialize;

@end
