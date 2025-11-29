@class NSString, HTSLiveCommon, NSMutableDictionary;

@interface HTSLiveGroupLiveGiftRecipientRecommendMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long recipientUserId;
@property (nonatomic) long long changeReasonEnum;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (copy, nonatomic) NSString *recipientUserOpenId;

+ (id)descriptor;

@end
