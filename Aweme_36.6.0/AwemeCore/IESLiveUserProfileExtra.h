@class NSString, NSMutableDictionary;

@interface IESLiveUserProfileExtra : IESLivePBBaseMessage

@property (nonatomic) BOOL anonymousIsSilence;
@property (copy, nonatomic) NSString *mysteryDetailJumpSchema;
@property (retain, nonatomic) NSMutableDictionary *bizExtra;
@property (readonly, nonatomic) unsigned long long bizExtra_Count;

+ (id)descriptor;

@end
