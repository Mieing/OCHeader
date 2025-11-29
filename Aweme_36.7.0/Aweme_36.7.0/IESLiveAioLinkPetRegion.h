@class IESLiveAioLinkNormalizedRect;

@interface IESLiveAioLinkPetRegion : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveAioLinkNormalizedRect *interactArea;
@property (nonatomic) BOOL hasInteractArea;

+ (id)descriptor;

@end
