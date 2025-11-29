@interface BDByteCastPPLoopModeCmd : BDByteCastPPCmd

@property (nonatomic) long long loopMode;
@property (nonatomic) long long shuffle;

+ (id)cmd;

@end
