@class HTSLiveCommon;

@interface HTSLiveRoomChannelSecretStatusMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long secretStatus;

+ (id)descriptor;

@end
