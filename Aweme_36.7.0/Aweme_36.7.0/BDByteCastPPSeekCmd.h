@interface BDByteCastPPSeekCmd : BDByteCastPPCmd

@property (nonatomic) long long position;

+ (id)cmd;

@end
