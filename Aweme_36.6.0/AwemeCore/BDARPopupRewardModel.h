@class NSArray, NSString, NSDictionary;

@interface BDARPopupRewardModel : NSObject

@property (copy, nonatomic) NSArray *amount;
@property (copy, nonatomic) NSArray *unit;
@property (copy, nonatomic) NSString *modalTitleTemplate;
@property (copy, nonatomic) NSString *modalIconUrl;
@property (copy, nonatomic) NSString *hasNextReward;
@property (copy, nonatomic) NSString *isRewardInexact;
@property (copy, nonatomic) NSString *modalTipTemplate;
@property (copy, nonatomic) NSString *modalConfirmButtonBubble;
@property (copy, nonatomic) NSString *modalConfirmButton;
@property (copy, nonatomic) NSString *modalCancelButton;
@property (copy, nonatomic) NSString *modalExtraConfig;
@property (copy, nonatomic) NSString *modalAuxiliaryButton;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)toDict;

@end
