@class NSString, NSMutableArray;

@interface EmoticonOperateCgi : StoreEmotionBaseCgi

@property (nonatomic) unsigned long long opCode;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableArray *md5List;
@property (retain, nonatomic) NSString *versionKey;
@property (retain, nonatomic) NSString *updatedVersionKey;
@property (copy, nonatomic) id /* block */ onFailBlock;
@property (copy, nonatomic) id /* block */ onSuccessBlock;

- (id)init;
- (void)startRequestWithOpCode:(unsigned long long)a0 type:(unsigned long long)a1 md5List:(id)a2 originVersionKey:(id)a3;
- (void)startRequestWithOpCode:(unsigned long long)a0 type:(unsigned long long)a1 md5List:(id)a2 insertPositionMd5:(id)a3 originVersionKey:(id)a4;
- (void)startMoveWithType:(unsigned long long)a0 md5List:(id)a1 insertPositionMd5:(id)a2 originVersionKey:(id)a3;
- (void)callFailedDelegateWithReason:(unsigned long long)a0 errMsg:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)convertMd5List:(id)a0;
- (void).cxx_destruct;

@end
