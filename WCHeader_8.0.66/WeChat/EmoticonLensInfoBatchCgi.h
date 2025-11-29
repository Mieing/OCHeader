@class NSString, NSMutableArray;
@protocol EmoticonLensInfoBatchCgiDelegate;

@interface EmoticonLensInfoBatchCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) NSMutableArray *waitingQueue;
@property (nonatomic) BOOL isRunning;
@property (weak, nonatomic) id<EmoticonLensInfoBatchCgiDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *successLensInfos;
@property (retain, nonatomic) NSMutableArray *failLensIds;
@property (retain, nonatomic) NSString *currentLensId;

- (id)initWithDelegate:(id)a0;
- (void)requestLensIds:(id)a0;
- (void)requestNextLens;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
