@class IESLiveStreamXPresetParamStreamInfo;

@interface IESLiveStreamXPresetParamOutput : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveStreamXPresetParamStreamInfo *streamInfo;
@property (nonatomic) BOOL hasStreamInfo;
@property (nonatomic) BOOL isNotPush;

+ (id)descriptor;

@end
