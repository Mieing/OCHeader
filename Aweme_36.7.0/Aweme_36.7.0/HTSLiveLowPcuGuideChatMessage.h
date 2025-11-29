@class HTSLiveCommon, HTSLiveLowPcuGuideChatData;

@interface HTSLiveLowPcuGuideChatMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveLowPcuGuideChatData *lowPcuGuideChatInfo;
@property (nonatomic) BOOL hasLowPcuGuideChatInfo;

+ (id)descriptor;

@end
