@class NSString, AWEAwemeModel;

@interface AWEAwemeStatsContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAwemeModel *repostItem;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) long long playType;

- (void).cxx_destruct;

@end
