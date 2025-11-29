@class NSString, HTSLiveCommon;

@interface HTSLiveInteractOpenDevelopMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) int develop;
@property (copy, nonatomic) NSString *sign;
@property (nonatomic) long long gameId;
@property (nonatomic) long long appKind;
@property (nonatomic) BOOL magicBoxRecycle;

+ (id)descriptor;

@end
