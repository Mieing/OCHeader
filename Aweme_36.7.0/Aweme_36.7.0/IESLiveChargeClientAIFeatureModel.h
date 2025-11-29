@class NSString, NSMutableArray;

@interface IESLiveChargeClientAIFeatureModel : NSObject

@property (retain, nonatomic) NSMutableArray *diamondList;
@property (nonatomic) long long balance;
@property (nonatomic) long long balanceGap;
@property (copy, nonatomic) NSString *chargeReason;
@property (nonatomic) BOOL isFans;
@property (copy, nonatomic) NSString *sessionId;

- (id)initWithDiamondList:(id)a0 balance:(long long)a1 balanceGap:(long long)a2 chargeReason:(id)a3 isFans:(BOOL)a4 sessionId:(id)a5;
- (void).cxx_destruct;
- (id)toDictionary;

@end
