@class NSString, RingBackRecommendReasonUsedByFriendInfo;

@interface RingBackRecommendReasonInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *reasonPureText;
@property (retain, nonatomic) RingBackRecommendReasonUsedByFriendInfo *usedByFriendInfo;
@property (nonatomic) unsigned long long recallCmdid;
@property (retain, nonatomic) NSString *itemContext;

+ (void)initialize;

@end
