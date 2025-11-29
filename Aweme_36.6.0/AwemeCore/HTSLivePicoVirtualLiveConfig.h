@class HTSLivePanelConfig, NSMutableArray;

@interface HTSLivePicoVirtualLiveConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLivePanelConfig *panelConfig;
@property (nonatomic) BOOL hasPanelConfig;
@property (retain, nonatomic) NSMutableArray *emojiTabArray;
@property (readonly, nonatomic) unsigned long long emojiTabArray_Count;

+ (id)descriptor;

@end
