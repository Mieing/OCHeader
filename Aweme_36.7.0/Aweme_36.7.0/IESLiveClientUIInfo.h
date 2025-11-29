@class IESLiveRealTimeChorusUIInfo, IESLiveAudioChatCycleUIInfo, IESLiveCrossRoomLinkmicUIInfo, GPBEnumArray, IESLiveUITranslation, IESLiveVideoChatDynamic1V7Info;

@interface IESLiveClientUIInfo : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveUITranslation *uiTranslation;
@property (nonatomic) BOOL hasUiTranslation;
@property (retain, nonatomic) GPBEnumArray *uiFeatureListArray;
@property (readonly, nonatomic) unsigned long long uiFeatureListArray_Count;
@property (retain, nonatomic) IESLiveAudioChatCycleUIInfo *audioChatCycle;
@property (nonatomic) BOOL hasAudioChatCycle;
@property (retain, nonatomic) IESLiveRealTimeChorusUIInfo *realTimeChorus;
@property (nonatomic) BOOL hasRealTimeChorus;
@property (retain, nonatomic) IESLiveVideoChatDynamic1V7Info *videoChatDynamic1V7;
@property (nonatomic) BOOL hasVideoChatDynamic1V7;
@property (retain, nonatomic) IESLiveCrossRoomLinkmicUIInfo *crossRoomLinkmic;
@property (nonatomic) BOOL hasCrossRoomLinkmic;

+ (id)descriptor;

@end
