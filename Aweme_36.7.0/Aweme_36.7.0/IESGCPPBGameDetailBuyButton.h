@class NSString, NSMutableDictionary;

@interface IESGCPPBGameDetailBuyButton : GPBMessage

@property (copy, nonatomic) NSString *propId;
@property (retain, nonatomic) NSMutableDictionary *buttonConfigs;
@property (readonly, nonatomic) unsigned long long buttonConfigs_Count;
@property (nonatomic) int propStatus;
@property (copy, nonatomic) NSString *btnSchema;
@property (nonatomic) int goodsType;
@property (copy, nonatomic) NSString *autoAction;

+ (id)descriptor;

@end
