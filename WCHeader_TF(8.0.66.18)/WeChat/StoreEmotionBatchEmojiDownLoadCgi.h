@class NSMutableArray;

@interface StoreEmotionBatchEmojiDownLoadCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) NSMutableArray *waitForRequestMd5List;
@property (retain, nonatomic) NSMutableArray *emojiInfoList;
@property (copy, nonatomic) id /* block */ onFinishBlock;
@property (nonatomic) unsigned int maxCountPerRequest;

- (id)init;
- (BOOL)startRequestWithMd5List:(id)a0;
- (BOOL)continueRequestIfNeeded;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
