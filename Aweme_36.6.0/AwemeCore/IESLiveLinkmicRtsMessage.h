@class IESLiveLinkmicRtsKickOutContent, IESLiveLinkmicRtsUpdateLinkStatusContent, NSMutableArray;

@interface IESLiveLinkmicRtsMessage : IESLivePBBaseMessage

@property (nonatomic) long long messageType;
@property (nonatomic) long long channelId;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) IESLiveLinkmicRtsUpdateLinkStatusContent *updateLinkStatusContent;
@property (retain, nonatomic) IESLiveLinkmicRtsKickOutContent *kickOutContent;
@property (retain, nonatomic) NSMutableArray *filterUidsArray;
@property (readonly, nonatomic) unsigned long long filterUidsArray_Count;

+ (id)descriptor;

@end
