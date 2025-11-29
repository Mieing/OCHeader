@class NSString;

@interface HTSLiveRelaxAnnouncementDetail_RedPacket : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *orderNo;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSString *prompt;

+ (id)descriptor;

@end
