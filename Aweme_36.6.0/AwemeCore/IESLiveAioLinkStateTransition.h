@class IESLiveAioLinkStateInfo;

@interface IESLiveAioLinkStateTransition : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveAioLinkStateInfo *fromState;
@property (nonatomic) BOOL hasFromState;
@property (retain, nonatomic) IESLiveAioLinkStateInfo *toState;
@property (nonatomic) BOOL hasToState;

+ (id)descriptor;

@end
