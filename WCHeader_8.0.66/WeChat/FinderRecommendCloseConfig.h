@class FinderLbsSameCityConfig, NSMutableArray;

@interface FinderRecommendCloseConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int closeRecommend;
@property (retain, nonatomic) NSMutableArray *tabTypeToClose;
@property (nonatomic) unsigned int followTabStyle;
@property (retain, nonatomic) FinderLbsSameCityConfig *cityConfig;

+ (void)initialize;

- (void)setCityConfig:(id)a0;
- (id)cityConfig;
- (void)setFollowTabStyle:(unsigned int)a0;
- (unsigned int)followTabStyle;
- (void)setTabTypeToClose:(id)a0;
- (id)tabTypeToClose;
- (void)setCloseRecommend:(unsigned int)a0;
- (unsigned int)closeRecommend;

@end
