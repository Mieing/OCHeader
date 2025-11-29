@class NSString, NSArray, NSMutableDictionary, NSNumber;
@protocol IESLiveCustomViewReaction;

@interface IESLiveChargeCustomViewModel : NSObject

@property (retain, nonatomic) NSString *inputString;
@property (retain, nonatomic) NSArray *allModels;
@property (retain, nonatomic) NSMutableDictionary *trackDict;
@property (retain, nonatomic) NSNumber *amount;
@property (weak, nonatomic) id<IESLiveCustomViewReaction> reaction;
@property (nonatomic) BOOL useDiamond;
@property (copy, nonatomic) id /* block */ chargeCompletion;
@property (copy, nonatomic) id /* block */ manualAgreementChangedBlock;
@property (nonatomic) BOOL didManualAgreement;
@property (retain, nonatomic) NSNumber *requestSource;

- (void)tr_customPageShow;
- (void)pr_updateCustomView;
- (void)p_recharge;
- (id)pr_calculateChargeModel;
- (void)handleChargeResultWithModel:(id)a0 source:(id)a1 extraParams:(id)a2 success:(BOOL)a3 error:(id)a4;
- (void)pr_buyProductWithModel:(id)a0 source:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)tr_paySuccessEventWith:(id)a0;
- (void)tr_payFailedEventWith:(id)a0 model:(id)a1;
- (long long)binarySearch:(id)a0 target:(long long)a1;
- (void)updateAmountWithNumber:(id)a0;
- (void)updateAmountWithRecommendNum:(id)a0;
- (void)deleteLatestNum;
- (void)beginCharge;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
