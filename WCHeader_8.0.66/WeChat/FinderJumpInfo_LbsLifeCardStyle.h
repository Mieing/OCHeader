@class NSString, NSMutableArray, FinderJumpInfo_LbsLifeCardStyle_FavorSection;

@interface FinderJumpInfo_LbsLifeCardStyle : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *poinameUrl;
@property (retain, nonatomic) NSString *poiname;
@property (retain, nonatomic) NSString *poinameWording;
@property (nonatomic) double score;
@property (retain, nonatomic) NSMutableArray *firstLineWording;
@property (retain, nonatomic) NSMutableArray *secondLineWording;
@property (retain, nonatomic) FinderJumpInfo_LbsLifeCardStyle_FavorSection *favorSection;
@property (retain, nonatomic) NSString *poinameDarkmodeUrl;
@property (retain, nonatomic) NSMutableArray *recommendReason;
@property (retain, nonatomic) NSString *recommendReasonColor;

+ (void)initialize;

@end
