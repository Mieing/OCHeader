@class NSString, HTSLiveCommon;

@interface HTSLiveBattleNotifyPointMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (nonatomic) long long msgType;
@property (copy, nonatomic) NSString *bizExtra;

+ (id)descriptor;

@end
