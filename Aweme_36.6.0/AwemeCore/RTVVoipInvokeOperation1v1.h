@class NSString;

@interface RTVVoipInvokeOperation1v1 : RTVVoipInvokeOperation

@property (readonly, copy, nonatomic) NSString *toUserID;

- (id)initWithVoipType:(long long)a0 enterFrom:(unsigned long long)a1 toUserID:(id)a2;
- (long long)operationType;
- (void).cxx_destruct;

@end
