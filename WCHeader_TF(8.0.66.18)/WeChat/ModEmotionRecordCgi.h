@class NSString;

@interface ModEmotionRecordCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) NSString *pid;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) id /* block */ onFailBlock;
@property (copy, nonatomic) id /* block */ onSuccessBlock;

- (id)init;
- (void)startRequestWithOpCode:(int)a0 pid:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
