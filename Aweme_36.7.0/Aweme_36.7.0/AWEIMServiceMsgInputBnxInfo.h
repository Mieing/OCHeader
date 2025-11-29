@interface AWEIMServiceMsgInputBnxInfo : AWEBaseBizConfigModel

@property (nonatomic) BOOL canUseCamera;
@property (nonatomic) BOOL canUseEmoji;
@property (nonatomic) BOOL canUseVoice;
@property (nonatomic) BOOL canUsePlusPanel;

+ (id)JSONKeyPathsByPropertyKey;

@end
