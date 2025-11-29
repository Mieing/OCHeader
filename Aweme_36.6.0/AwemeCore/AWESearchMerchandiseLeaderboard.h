@class NSString;

@interface AWESearchMerchandiseLeaderboard : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long textSplitIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
