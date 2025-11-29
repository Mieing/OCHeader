@class NSString;

@interface CJPayUnifyPayIntegratedConfirmResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *errorType;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *innerMsg;
@property (copy, nonatomic) NSString *typecnt;
@property (copy, nonatomic) NSString *errorData;
@property (copy, nonatomic) NSString *processStr;
@property (nonatomic) double responseDuration;
@property (copy, nonatomic) NSString *channelData;
@property (copy, nonatomic) NSString *tradeType;
@property (copy, nonatomic) NSString *ptCode;
@property (retain, nonatomic) NSString *dyPayTradeConfirmResponse;
@property (retain, nonatomic) NSString *processPassThrough;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;
+ (id)basicMapperWith:(id)a0;

- (id)payDataDict;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
