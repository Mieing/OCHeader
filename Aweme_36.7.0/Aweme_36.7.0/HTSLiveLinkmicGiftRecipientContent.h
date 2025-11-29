@class NSString, NSMutableDictionary;

@interface HTSLiveLinkmicGiftRecipientContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *giftRecipientUserId;
@property (nonatomic) int reason;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
