@interface AWEECMiniWindowHelperWrapper : NSObject

@property (weak, nonatomic) id targetObj;
@property (copy, nonatomic) id /* block */ clickCloseComplete;
@property (copy, nonatomic) id /* block */ customTapComplete;
@property (copy, nonatomic) id /* block */ muteStateChangedBlock;

- (void).cxx_destruct;

@end
