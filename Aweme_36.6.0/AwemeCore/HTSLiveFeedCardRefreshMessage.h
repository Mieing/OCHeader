@class NSString;

@interface HTSLiveFeedCardRefreshMessage : IESLivePBBaseMessage

@property (nonatomic) int castType;
@property (nonatomic) int notifyType;
@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSString *subscriptionId;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
