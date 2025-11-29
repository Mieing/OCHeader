@class NSString, NSMutableArray;

@interface FinderRelatedRecommendTips : WXPBGeneratedMessage

@property (nonatomic) unsigned int playProgressToShow;
@property (retain, nonatomic) NSString *relatedWording;
@property (retain, nonatomic) NSMutableArray *friendLikeUsers;
@property (nonatomic) unsigned int tipsType;

+ (void)initialize;

@end
