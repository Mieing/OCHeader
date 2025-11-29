@class NSString;

@interface AWEDeliveryEntryChatInfoModel : NSObject

@property (copy, nonatomic) NSString *deliveryId;
@property (copy, nonatomic) NSString *deliveryStatus;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *accountId;

+ (id)parseFromDict:(id)a0;

- (void).cxx_destruct;

@end
