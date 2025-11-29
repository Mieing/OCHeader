@interface IESLiveInteractMuteOperationNode : NSObject

@property (nonatomic) BOOL mute;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL noRequestOnMuteSelf;

@end
