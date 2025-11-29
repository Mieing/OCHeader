@class NSString;

@interface HTSLivePreviewCjRpMessage_CjRp : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rpOrderNo;
@property (nonatomic) long long sendTime;
@property (nonatomic) long long expireTime;
@property (nonatomic) long long displayDelaySeconds;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long totalAmount;
@property (nonatomic) long long leftAmount;
@property (nonatomic) long long totalNum;
@property (nonatomic) long long leftNum;

+ (id)descriptor;

@end
