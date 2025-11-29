@class NSString;

@interface SolitaireJoinReport : SolitaireReport

@property (nonatomic) unsigned int addCount;
@property (nonatomic) unsigned int removeCount;
@property (nonatomic) unsigned long long editScene;
@property (retain, nonatomic) NSString *nsPunctuation;

- (void)report;
- (void).cxx_destruct;

@end
