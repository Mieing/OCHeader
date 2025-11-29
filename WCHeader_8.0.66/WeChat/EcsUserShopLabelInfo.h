@class EcsUserShopInfo, NSMutableArray;

@interface EcsUserShopLabelInfo : WXPBGeneratedMessage

@property (retain, nonatomic) EcsUserShopInfo *userShopInfo;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) NSMutableArray *labels;

+ (void)initialize;

@end
