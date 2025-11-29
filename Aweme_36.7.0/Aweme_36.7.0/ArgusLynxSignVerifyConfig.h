@class NSArray;

@interface ArgusLynxSignVerifyConfig : ArgusStrategyBaseConfig

@property (nonatomic) unsigned long long signVerifyMode;
@property (retain, nonatomic) NSArray *degradeList;
@property (nonatomic) BOOL disableGlobalPKSign;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
