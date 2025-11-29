@interface BDByteCastPPSetVolumeCmd : BDByteCastPPCmd

@property (nonatomic) long long volume;

+ (id)cmd;

@end
