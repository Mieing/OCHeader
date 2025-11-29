@class HTSLiveCommon;

@interface HTSLiveRoomChannelSystemMessage : IESLivePBBaseMessage

@property (nonatomic) BOOL isCreateMessage;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
