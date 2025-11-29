@class NSString;

@interface AWEInteractModularizationHotsoonFlameModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sendOrderID;
@property (nonatomic) long long sendFlameAmount;
@property (copy, nonatomic) NSString *replyText;
@property (copy, nonatomic) NSString *sendText;
@property (nonatomic) BOOL hasReply;
@property (nonatomic) unsigned long long orderStatus;
@property (copy, nonatomic) NSString *orderStatusText;
@property (nonatomic) unsigned long long orderType;
@property (copy, nonatomic) NSString *orderStatusSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
