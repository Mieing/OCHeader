@class HTSLiveCommon, HTSLiveItemBubbleInfo;

@interface HTSLiveCommonBubbleMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveItemBubbleInfo *bubbleInfo;
@property (nonatomic) BOOL hasBubbleInfo;

+ (id)descriptor;

@end
