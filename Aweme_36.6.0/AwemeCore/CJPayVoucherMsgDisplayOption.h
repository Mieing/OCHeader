@class NSString;

@interface CJPayVoucherMsgDisplayOption : JSONModel

@property (copy, nonatomic) NSString *eventType;
@property (nonatomic) long long displayCount;
@property (copy, nonatomic) NSString *displaySource;
@property (nonatomic) long long globalDisplayCount;
@property (copy, nonatomic) NSString *triggerIndex;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
