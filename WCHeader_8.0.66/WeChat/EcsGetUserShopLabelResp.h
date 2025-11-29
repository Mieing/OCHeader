@class EcsFreqInfo, NSString, NSMutableArray, BaseResponse;

@interface EcsGetUserShopLabelResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *userShopLabels;
@property (retain, nonatomic) NSString *nextKey;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) EcsFreqInfo *freqInfo;

+ (void)initialize;

- (void)setFreqInfo:(id)a0;
- (id)freqInfo;
- (void)setContinueFlag:(BOOL)a0;
- (BOOL)continueFlag;
- (void)setNextKey:(id)a0;
- (id)nextKey;
- (void)setUserShopLabels:(id)a0;
- (id)userShopLabels;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
