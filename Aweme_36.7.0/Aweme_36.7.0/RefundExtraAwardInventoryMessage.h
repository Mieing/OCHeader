@class NSString, GPBInt64Int64Dictionary;

@interface RefundExtraAwardInventoryMessage : IESLivePBBaseMessage

@property (nonatomic) long long extraAwardType;
@property (retain, nonatomic) GPBInt64Int64Dictionary *userDetail;
@property (readonly, nonatomic) unsigned long long userDetail_Count;
@property (nonatomic) long long lotteryType;
@property (nonatomic) long long lotteryId;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long lotteryStartAt;
@property (nonatomic) long long lotteryDrawAt;
@property (copy, nonatomic) NSString *extraAwardServerBizData;
@property (copy, nonatomic) NSString *extraAwardClientBizData;
@property (nonatomic) long long messageSliceTotalCount;
@property (nonatomic) long long messageSliceIndex;

+ (id)descriptor;

@end
