@interface BDByteCastPPSkipInfoCmd : BDByteCastPPCmd

@property (nonatomic) long long skip;

+ (id)cmd;

@end
