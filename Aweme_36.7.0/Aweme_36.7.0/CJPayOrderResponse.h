@class NSString;

@interface CJPayOrderResponse : CJPayIntergratedBaseResponse

@property (copy, nonatomic) NSString *channelData;
@property (copy, nonatomic) NSString *tradeType;
@property (copy, nonatomic) NSString *ptCode;

+ (id)keyMapper;

- (id)payDataDict;
- (void).cxx_destruct;

@end
