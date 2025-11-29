@class NSString, NSMutableArray;

@interface FavorComposeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *favorComposeId;
@property (retain, nonatomic) NSMutableArray *favorInfoList;
@property (nonatomic) unsigned long long showFavorAmount;
@property (nonatomic) unsigned long long showPayAmount;
@property (retain, nonatomic) NSString *totalFavorAmount;
@property (retain, nonatomic) NSString *favorDesc;
@property (nonatomic) unsigned long long composeSortFlag;
@property (retain, nonatomic) NSString *extendStr;

+ (id)GenFromDictionary:(id)a0;
+ (void)initialize;

@end
