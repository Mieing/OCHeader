@class NSString;

@interface HTSLiveChestCardEffectTask : IESLivePBBaseMessage

@property (nonatomic) BOOL withTask;
@property (nonatomic) long long type;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long sendGiftUserNum;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
