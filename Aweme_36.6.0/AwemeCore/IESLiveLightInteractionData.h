@class IESLiveClickAction;

@interface IESLiveLightInteractionData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveClickAction *clickAction;
@property (nonatomic) BOOL hasClickAction;

+ (id)descriptor;

@end
